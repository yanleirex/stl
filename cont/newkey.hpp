//
// Created by yanlei on 16-10-13.
//

#ifndef STL_NEWKEY_HPP
#define STL_NEWKEY_HPP

namespace MyLib
{
    template <class Cont>
    inline bool replace_key(Cont& c,
    const typename Cont::key_type& old_key,
    const typename Cont::key_type& new_key)
    {
        typename Cont::iterator pos;
        pos = c.find(old_key);
        if(pos!=c.end())
        {
            c.insert(typename Cont::value_type(new_key,
            pos->second));

            c.erase(pos);
            return true;
        }
        else
        {
            return false;
        }
    }
}

#endif //STL_NEWKEY_HPP
