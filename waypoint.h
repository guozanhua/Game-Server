dynObject_t* waypoint_create(mapChannel_t *mapChannel, float x, float y, float z, float orientation, uint32 waypointID, uint32 nameId);
void waypoint_recv_SelectWaypoint(mapChannelClient_t *client, uint8 *pyString, sint32 pyStringLen);