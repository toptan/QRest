#include "include/TEndpoint.h"

TEndpoint::TEndpoint() {}

QString TEndpoint::hostName() const { return m_hostName; }

void TEndpoint::setHostName(const QString &hostName) { m_hostName = hostName; }

quint16 TEndpoint::port() const { return m_port; }

void TEndpoint::setPort(const quint16 &port) { m_port = port; }
