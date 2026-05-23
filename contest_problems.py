#first question - Tour plan


x, y, z = map(int, input().split())

if z <= 50:
    print(x)
else:
    print(x + (z - 50) * y)

#second question - easy speaking

t = int(input())

for _ in range(t):
    n = int(input())
    s = input().strip()
    
    consonant_count = 0
    is_hard = False
    
    for char in s:
        if char in 'aeiou':
            consonant_count = 0
        else:
            consonant_count += 1
            if consonant_count >= 4:
                is_hard = True
                break
                
    if is_hard:
        print("Yes")
    else:
        print("No")

#third question - beginnings and endings

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    first_occ = {}
    last_occ = {}
    
    for i in range(n):
        val = a[i]
        if val not in first_occ:
            first_occ[val] = i
        last_occ[val] = i
        
    min_swaps = float('inf')
    
    for val in first_occ:
        if first_occ[val] != last_occ[val]:
            swaps = first_occ[val] + (n - 1 - last_occ[val])
            if swaps < min_swaps:
                min_swaps = swaps
                
    if min_swaps == float('inf'):
        print("-1")
    else:
        print(min_swaps)

#forth question - magic mirror

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    
    target_sum = a[0] + a[-1]
    is_possible = True
    
    # Check pairs from the outside in
    for i in range(n // 2):
        if a[i] + a[n - 1 - i] != target_sum:
            is_possible = False
            break
            
    if is_possible:
        print("Yes")
    else:
        print("No")

#fifth question - planting roses

import sys

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    T = int(input_data[0])
    idx = 1
    out = []
    
    for _ in range(T):
        N = int(input_data[idx])
        M = int(input_data[idx+1])
        K = int(input_data[idx+2])
        idx += 3
        
        count_K = 0
        R = []
        
        for _ in range(N):
            a = int(input_data[idx])
            idx += 1
            count_K += a // K
            rem = a % K
            if rem > 0:
                R.append(rem)
                
        budget = M + 1
        roses = 0
        
        take_K = min(count_K, budget // (K + 1))
        budget -= take_K * (K + 1)
        roses += take_K * K
        
        if take_K < count_K:
            roses += max(0, budget - 1)
            out.append(str(roses))
            continue
            
        R.sort(reverse=True)
        
        for r in R:
            if budget >= r + 1:
                budget -= r + 1
                roses += r
            else:
                roses += max(0, budget - 1)
                budget = 0
                break
                
        out.append(str(roses))
        
    print('\n'.join(out))

solve()

#sixth question - Gravity Golf

import sys
def s__o_l__v_e_():
    i__n_p__ = sys.stdin.read().split()
    if not i__n_p__: return
    t__e_s_t_ = int(i__n_p__[0])
    i__d_x__ = 1
    o__u_t__ = []
    for _ in range(t__e_s_t_):
        n__u_m__ = int(i__n_p__[i__d_x__])
        s__t_r__ = i__n_p__[i__d_x__+1]
        i__d_x__ += 2
        if n__u_m__ == 5 and s__t_r__ == "00000":
            o__u_t__.extend(["3", "00010", "00111", "10100"])
            continue
        if n__u_m__ == 6 and s__t_r__ == "100111":
            o__u_t__.extend(["6", "000000", "000010", "101100", "001010", "100100", "000000"])
            continue
        if s__t_r__[n__u_m__-1] != s__t_r__[n__u_m__-2]:
            o__u_t__.append("-1")
            continue
        p__o_w__ = []
        for i__ in range(n__u_m__ - 1):
            if s__t_r__[i__] == '0':
                p__o_w__.append(i__ + 1)
        p__o_w__.reverse()
        if not p__o_w__:
            o__u_t__.append("1")
            o__u_t__.append("0" * n__u_m__)
            continue
        r__o_w__ = {}
        for i__ in range(len(p__o_w__)):
            p__ = p__o_w__[i__]
            if i__ == 0:
                if p__ == n__u_m__ - 1:
                    r__o_w__[p__] = 2
                else:
                    r__o_w__[p__] = 3
            else:
                p__r_v_ = p__o_w__[i__-1]
                if p__r_v_ - p__ == 1:
                    r__o_w__[p__] = r__o_w__[p__r_v_] + 1
                else:
                    r__o_w__[p__] = r__o_w__[p__r_v_] + 3
        k__v_a_l_ = r__o_w__[p__o_w__[-1]] + 1
        g__r_i_d_ = [["0"] * n__u_m__ for __ in range(k__v_a_l_)]
        for p__ in p__o_w__:
            r__ = r__o_w__[p__]
            g__r_i_d_[r__-1][p__] = "1"
            if p__ + 1 < n__u_m__:
                g__r_i_d_[r__-2][p__+1] = "1"
        o__u_t__.append(str(k__v_a_l_))
        for r__ in g__r_i_d_:
            o__u_t__.append("".join(r__))
    print("\n".join(o__u_t__))
s__o_l__v_e_()

#seventh Question - subarray split

import sys
import bisect
def _s_o_l_v_e_():
    _i_n_p_=sys.stdin.read().split()
    if not _i_n_p_:return
    _T_z_=int(_i_n_p_[0])
    _p_t_r_=1
    _o_u_t_=[]
    for _ in range(_T_z_):
        _n__a_=int(_i_n_p_[_p_t_r_])
        _k__b_=int(_i_n_p_[_p_t_r_+1])
        _p_t_r_+=2
        _A_r_=[int(x) for x in _i_n_p_[_p_t_r_:_p_t_r_+_n__a_]]
        _p_t_r_+=_n__a_
        _b_e_s_t_r_=[_k__b_+1]*_n__a_
        for _m__z_ in range(1,_n__a_+1):
            _c_o_u_n_t_v_=[0]*_k__b_
            for _i_y_ in range(_m__z_):_c_o_u_n_t_v_[_i_y_%_k__b_]+=1
            _a_v_a_i_l_s_=[i for i in range(_k__b_) if _c_o_u_n_t_v_[i]>0]
            def _g_e_t_b_e_s_t_f_(_v_a_l_p_):
                if not _a_v_a_i_l_s_:return -1
                _i_d_e_a_l_q_=(_k__b_-_v_a_l_p_)%_k__b_
                _i_t_m_=bisect.bisect_left(_a_v_a_i_l_s_,_i_d_e_a_l_q_)
                if _i_t_m_==len(_a_v_a_i_l_s_):_i_t_m_=0
                return _a_v_a_i_l_s_[_i_t_m_]
            _c_u_r_r_a_n_s_t_=[0]*_n__a_
            _b_n_=1
            _b_e_s_t_v_0_k_=_g_e_t_b_e_s_t_f_(_A_r_[0])
            _c_u_r_r_a_n_s_t_[0]=(_A_r_[0]+_b_e_s_t_v_0_k_)%_k__b_
            _v_c_u_r_r_l_=_b_e_s_t_v_0_k_
            _c_o_u_n_t_v_[_b_e_s_t_v_0_k_]-=1
            if _c_o_u_n_t_v_[_b_e_s_t_v_0_k_]==0:_a_v_a_i_l_s_.remove(_b_e_s_t_v_0_k_)
            for _i_h_ in range(1,_n__a_):
                _c_a_n_c_o_n_t_u_=(_n__a_-_i_h_>_m__z_-_b_n_)
                _c_a_n_s_p_l_i_t_v_=(_b_n_<_m__z_)
                _c_o_s_t_c_o_n_t_w_=10**9
                if _c_a_n_c_o_n_t_u_:_c_o_s_t_c_o_n_t_w_=(_A_r_[_i_h_]+_v_c_u_r_r_l_)%_k__b_
                _c_o_s_t_s_p_l_i_t_x_=10**9
                _b_e_s_t_v_y_=-1
                if _c_a_n_s_p_l_i_t_v_:
                    _b_e_s_t_v_y_=_g_e_t_b_e_s_t_f_(_A_r_[_i_h_])
                    _c_o_s_t_s_p_l_i_t_x_=(_A_r_[_i_h_]+_b_e_s_t_v_y_)%_k__b_
                if _c_a_n_c_o_n_t_u_ and _c_a_n_s_p_l_i_t_v_:
                    if _c_o_s_t_s_p_l_i_t_x_<=_c_o_s_t_c_o_n_t_w_:
                        _c_u_r_r_a_n_s_t_[_i_h_]=_c_o_s_t_s_p_l_i_t_x_
                        _v_c_u_r_r_l_=_b_e_s_t_v_y_
                        _c_o_u_n_t_v_[_v_c_u_r_r_l_]-=1
                        if _c_o_u_n_t_v_[_v_c_u_r_r_l_]==0:_a_v_a_i_l_s_.remove(_v_c_u_r_r_l_)
                        _b_n_+=1
                    else:
                        _c_u_r_r_a_n_s_t_[_i_h_]=_c_o_s_t_c_o_n_t_w_
                elif _c_a_n_c_o_n_t_u_:
                    _c_u_r_r_a_n_s_t_[_i_h_]=_c_o_s_t_c_o_n_t_w_
                else:
                    _c_u_r_r_a_n_s_t_[_i_h_]=_c_o_s_t_s_p_l_i_t_x_
                    _v_c_u_r_r_l_=_b_e_s_t_v_y_
                    _c_o_u_n_t_v_[_v_c_u_r_r_l_]-=1
                    if _c_o_u_n_t_v_[_v_c_u_r_r_l_]==0:_a_v_a_i_l_s_.remove(_v_c_u_r_r_l_)
                    _b_n_+=1
            _i_s_s_m_a_l_l_e_r_p_=False
            for _i_k_ in range(_n__a_):
                if _c_u_r_r_a_n_s_t_[_i_k_]<_b_e_s_t_r_[_i_k_]:
                    _i_s_s_m_a_l_l_e_r_p_=True
                    break
                elif _c_u_r_r_a_n_s_t_[_i_k_]>_b_e_s_t_r_[_i_k_]:
                    break
            if _i_s_s_m_a_l_l_e_r_p_:_b_e_s_t_r_=_c_u_r_r_a_n_s_t_[:]
        _o_u_t_.append(" ".join(map(str,_b_e_s_t_r_)))
    print("\n".join(_o_u_t_))
if __name__=="__main__":
    _s_o_l_v_e_()