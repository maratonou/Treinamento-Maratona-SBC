#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

template<class T>
using ordered_set = tree<T ,  null_type , less<T> ,  rb_tree_tag ,  tree_order_statistics_node_update>;

/*
	order_of_key(chave) = quantidade de elementos menores que chave
	find_by_order = iterador da k-esima chave
*/

template<class T>
using ordered_multiset = tree<T ,  null_type , less_equal<T> ,  rb_tree_tag ,  tree_order_statistics_node_update>;

// pra dar erase em multiset tem que usar .erase(.find_by_order(.order_of_key(chave)))
