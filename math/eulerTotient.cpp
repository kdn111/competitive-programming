map<ll,ll> p;
ll phi(ll x)
{
    if (p.count(x)) return p[x];
    ll ret=x,z=x;
    for (ll i=2;i*i<=x;i++)
    {
        if (x%i==0)
        {
            while (x%i==0) x/=i;
            ret=ret/i*(i-1);
        }
    }
    if (x>1) ret=ret/x*(x-1);
    return p[z]=ret;
}
