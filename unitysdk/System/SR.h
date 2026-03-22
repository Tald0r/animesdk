#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Resources { class ResourceManager; }

#define SYSTEM_SR_FORMAT_OFFSET UNITYSDK_OFFSET(0x1A7E4020)
#define SYSTEM_SR_GETRESOURCESTRING_OFFSET UNITYSDK_OFFSET(0x1A7E3F00)
#define SYSTEM_SR_GET_ARGUMENT_BADFORMATSPECIFIER_OFFSET UNITYSDK_OFFSET(0x1A7E41E0)
#define SYSTEM_SR_GET_ARGUMENT_DESTINATIONTOOSHORT_OFFSET UNITYSDK_OFFSET(0x1A7E4180)
#define SYSTEM_SR_GET_ARGUMENT_GWITHPRECISIONNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A7DFDB0)
#define SYSTEM_SR_GET_ARGUMENT_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A7E4120)
#define SYSTEM_SR_GET_ARGUMENT_PRECISIONTOOLARGE_OFFSET UNITYSDK_OFFSET(0x1A7E4240)
#define SYSTEM_SR_GET_ENDPOSITIONNOTREACHED_OFFSET UNITYSDK_OFFSET(0x1A7E42A0)
#define SYSTEM_SR_GET_NOTSUPPORTED_CANNOTCALLEQUALSONSPAN_OFFSET UNITYSDK_OFFSET(0x1A7E4060)
#define SYSTEM_SR_GET_NOTSUPPORTED_CANNOTCALLGETHASHCODEONSPAN_OFFSET UNITYSDK_OFFSET(0x1A7E40C0)
#define SYSTEM_SR_GET_RESOURCEMANAGER_OFFSET UNITYSDK_OFFSET(0x1A7E3E30)
#define SYSTEM_SR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7E4300)

namespace System
{
	inline static constexpr unsigned int SR_TypeDefinitionIndex = 7552;

	class SR : public ::System::Object
	{
	public:
		static ::System::Resources::ResourceManager** StaticGet_s_resourceManager()
		{
			return (::System::Resources::ResourceManager**)Il2CppClass::FromTypeDefinitionIndex(SR_TypeDefinitionIndex)->GetStaticField(0x65A0);
		}
		static ::System::Type** StaticGet__ResourceType_k__BackingField()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(SR_TypeDefinitionIndex)->GetStaticField(0x65A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR__CCTOR_OFFSET))();
		}

		static ::System::Resources::ResourceManager* get_ResourceManager()
		{
			return ((::System::Resources::ResourceManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_RESOURCEMANAGER_OFFSET))();
		}

		static ::System::String* GetResourceString(::System::String* resourceKey, ::System::String* defaultString)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SR_GETRESOURCESTRING_OFFSET))(resourceKey, defaultString);
		}

		static ::System::String* Format(::System::String* resourceFormat, ::System::Object* p1)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SR_FORMAT_OFFSET))(resourceFormat, p1);
		}

		static ::System::String* get_NotSupported_CannotCallEqualsOnSpan()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_NOTSUPPORTED_CANNOTCALLEQUALSONSPAN_OFFSET))();
		}

		static ::System::String* get_NotSupported_CannotCallGetHashCodeOnSpan()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_NOTSUPPORTED_CANNOTCALLGETHASHCODEONSPAN_OFFSET))();
		}

		static ::System::String* get_Argument_InvalidTypeWithPointersNotSupported()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_INVALIDTYPEWITHPOINTERSNOTSUPPORTED_OFFSET))();
		}

		static ::System::String* get_Argument_DestinationTooShort()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_DESTINATIONTOOSHORT_OFFSET))();
		}

		static ::System::String* get_Argument_BadFormatSpecifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_BADFORMATSPECIFIER_OFFSET))();
		}

		static ::System::String* get_Argument_GWithPrecisionNotSupported()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_GWITHPRECISIONNOTSUPPORTED_OFFSET))();
		}

		static ::System::String* get_Argument_PrecisionTooLarge()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ARGUMENT_PRECISIONTOOLARGE_OFFSET))();
		}

		static ::System::String* get_EndPositionNotReached()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SR_GET_ENDPOSITIONNOTREACHED_OFFSET))();
		}
	};
}
