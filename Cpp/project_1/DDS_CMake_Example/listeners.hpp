

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from listeners.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef listeners_615587429_hpp
#define listeners_615587429_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport listeners {
  public:
    listeners();

    explicit listeners(
        int16_t x);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    listeners (listeners&&) = default;
    listeners& operator=(listeners&&) = default;
    listeners& operator=(const listeners&) = default;
    listeners(const listeners&) = default;
    #else
    listeners(listeners&& other_) OMG_NOEXCEPT;  
    listeners& operator=(listeners&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    int16_t& x() OMG_NOEXCEPT {
        return m_x_;
    }

    const int16_t& x() const OMG_NOEXCEPT {
        return m_x_;
    }

    void x(int16_t value) {
        m_x_ = value;
    }

    bool operator == (const listeners& other_) const;
    bool operator != (const listeners& other_) const;

    void swap(listeners& other_) OMG_NOEXCEPT ;

  private:

    int16_t m_x_;

};

inline void swap(listeners& a, listeners& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const listeners& sample);

class NDDSUSERDllExport msg {
  public:
    msg();

    explicit msg(
        char c);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    msg (msg&&) = default;
    msg& operator=(msg&&) = default;
    msg& operator=(const msg&) = default;
    msg(const msg&) = default;
    #else
    msg(msg&& other_) OMG_NOEXCEPT;  
    msg& operator=(msg&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    char& c() OMG_NOEXCEPT {
        return m_c_;
    }

    const char& c() const OMG_NOEXCEPT {
        return m_c_;
    }

    void c(char value) {
        m_c_ = value;
    }

    bool operator == (const msg& other_) const;
    bool operator != (const msg& other_) const;

    void swap(msg& other_) OMG_NOEXCEPT ;

  private:

    char m_c_;

};

inline void swap(msg& a, msg& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const msg& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< listeners > {
            NDDSUSERDllExport static std::string value() {
                return "listeners";
            }
        };

        template<>
        struct is_topic_type< listeners > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< listeners > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const listeners& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(listeners& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(listeners& sample);

            NDDSUSERDllExport 
            static void allocate_sample(listeners& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

        template<>
        struct topic_type_name< msg > {
            NDDSUSERDllExport static std::string value() {
                return "msg";
            }
        };

        template<>
        struct is_topic_type< msg > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< msg > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const msg& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(msg& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(msg& sample);

            NDDSUSERDllExport 
            static void allocate_sample(msg& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< listeners > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< listeners > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< msg > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< msg > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // listeners_615587429_hpp

