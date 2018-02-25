#ifndef TENDPOINT_H
#define TENDPOINT_H

#include <QObject>
#include <QString>

///
/// \brief The TEndpoint class defines the REST end point.
///
class TEndpoint {
    Q_OBJECT
public:
    TEndpoint();

    ///
    /// \brief Returns the endpoint hostname.
    /// \return The endpoint hostname.
    ///
    QString hostName() const;

    ///
    /// \brief Sets the endpoint hostname.
    /// \param hostName An endpoint hostname to set.
    ///
    void setHostName(const QString &hostName);

    ///
    /// \brief Returns the enpoint host port number.
    /// \return The endpoint host port number.
    ///
    quint16 port() const;

    ///
    /// \brief Sets the endpoint host port number.
    /// \param port The enpoint host port number to set.
    ///
    void setPort(const quint16 &port);

private:
    QString m_hostName; //!< The endpoint hostname.
    quint16 m_port;     //!< The enpoint host port.
};

#endif // TENDPOINT_H
