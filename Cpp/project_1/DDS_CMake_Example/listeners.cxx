

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from listeners.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "listeners.hpp"
#include "listenersPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- listeners: 

listeners::listeners() :
    m_x_ (0)  {
}   

listeners::listeners (
    int16_t x)
    :
        m_x_( x ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
listeners::listeners(listeners&& other_) OMG_NOEXCEPT  :m_x_ (std::move(other_.m_x_))
{
} 

listeners& listeners::operator=(listeners&&  other_) OMG_NOEXCEPT {
    listeners tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void listeners::swap(listeners& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_x_, other_.m_x_);
}  

bool listeners::operator == (const listeners& other_) const {
    if (m_x_ != other_.m_x_) {
        return false;
    }
    return true;
}
bool listeners::operator != (const listeners& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const listeners& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "x: " << sample.x() ;
    o <<"]";
    return o;
}

// ---- msg: 

msg::msg() :
    m_c_ (0)  {
}   

msg::msg (
    char c)
    :
        m_c_( c ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
msg::msg(msg&& other_) OMG_NOEXCEPT  :m_c_ (std::move(other_.m_c_))
{
} 

msg& msg::operator=(msg&&  other_) OMG_NOEXCEPT {
    msg tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void msg::swap(msg& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_c_, other_.m_c_);
}  

bool msg::operator == (const msg& other_) const {
    if (m_c_ != other_.m_c_) {
        return false;
    }
    return true;
}
bool msg::operator != (const msg& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const msg& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "c: '" << sample.c() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< listeners > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member listeners_g_tc_members[1]=
                {

                    {
                        (char *)"x",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode listeners_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"listeners", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        listeners_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for listeners*/

                if (is_initialized) {
                    return &listeners_g_tc;
                }

                listeners_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                listeners_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_short;

                /* Initialize the values for member annotations. */
                listeners_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_SHORT;
                listeners_g_tc_members[0]._annotations._defaultValue._u.short_value = 0;
                listeners_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_SHORT;
                listeners_g_tc_members[0]._annotations._minValue._u.short_value = RTIXCdrShort_MIN;
                listeners_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_SHORT;
                listeners_g_tc_members[0]._annotations._maxValue._u.short_value = RTIXCdrShort_MAX;

                listeners_g_tc._data._sampleAccessInfo = sample_access_info();
                listeners_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &listeners_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                listeners *sample;

                static RTIXCdrMemberAccessInfo listeners_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo listeners_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &listeners_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    listeners);
                if (sample == NULL) {
                    return NULL;
                }

                listeners_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->x() - (char *)sample);

                listeners_g_sampleAccessInfo.memberAccessInfos = 
                listeners_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(listeners);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        listeners_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        listeners_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                listeners_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                listeners_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< listeners >;

                listeners_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &listeners_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin listeners_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &listeners_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< listeners >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< listeners >::get())));
        }

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< msg > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member msg_g_tc_members[1]=
                {

                    {
                        (char *)"c",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode msg_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"msg", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        msg_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for msg*/

                if (is_initialized) {
                    return &msg_g_tc;
                }

                msg_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                msg_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_char;

                /* Initialize the values for member annotations. */
                msg_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_CHAR;
                msg_g_tc_members[0]._annotations._defaultValue._u.char_value = 0;

                msg_g_tc._data._sampleAccessInfo = sample_access_info();
                msg_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &msg_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                msg *sample;

                static RTIXCdrMemberAccessInfo msg_g_memberAccessInfos[1] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo msg_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &msg_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    msg);
                if (sample == NULL) {
                    return NULL;
                }

                msg_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->c() - (char *)sample);

                msg_g_sampleAccessInfo.memberAccessInfos = 
                msg_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(msg);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        msg_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        msg_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                msg_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                msg_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< msg >;

                msg_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &msg_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin msg_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &msg_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< msg >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< msg >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< listeners >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                listenersPlugin_new,
                listenersPlugin_delete);
        }

        std::vector<char>& topic_type_support< listeners >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const listeners& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = listenersPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = listenersPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< listeners >::from_cdr_buffer(listeners& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = listenersPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create listeners from cdr buffer");
        }

        void topic_type_support< listeners >::reset_sample(listeners& sample) 
        {
            sample.x(0);
        }

        void topic_type_support< listeners >::allocate_sample(listeners& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

        void topic_type_support< msg >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                msgPlugin_new,
                msgPlugin_delete);
        }

        std::vector<char>& topic_type_support< msg >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const msg& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = msgPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = msgPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< msg >::from_cdr_buffer(msg& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = msgPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create msg from cdr buffer");
        }

        void topic_type_support< msg >::reset_sample(msg& sample) 
        {
            sample.c(0);
        }

        void topic_type_support< msg >::allocate_sample(msg& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

