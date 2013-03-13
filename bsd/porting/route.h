#ifndef __NETPORT_ROUTE_H__
#define __NETPORT_ROUTE_H__


/* Routing functions */
void osv_route_add_host(const char* destination,
    const char* gateway);

void osv_route_arp_add(const char* ifname, const char* ip,
    const char* macaddr);

const char* osv_get_if_mac_addr(const char* if_name);

#endif /* __NETPORT_ROUTE_H__ */