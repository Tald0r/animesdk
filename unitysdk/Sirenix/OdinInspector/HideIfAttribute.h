#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_HIDEIFATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1B114750)
#define SIRENIX_ODININSPECTOR_HIDEIFATTRIBUTE_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1B114760)
#define SIRENIX_ODININSPECTOR_HIDEIFATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B114780)
#define SIRENIX_ODININSPECTOR_HIDEIFATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B114770)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int HideIfAttribute_TypeDefinitionIndex = 7170;

	class HideIfAttribute : public ::System::Attribute
	{
	public:
		::System::String* Condition; // 0x10
		::System::Object* Value; // 0x18
		::System::Boolean Animate; // 0x20

		::System::Void _ctor(::System::String* condition, ::System::Boolean animate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFATTRIBUTE__CTOR_OFFSET))(this, condition, animate);
		}

		::System::Void _ctor_1(::System::String* condition, ::System::Object* optionalValue, ::System::Boolean animate)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFATTRIBUTE__CTOR_1_OFFSET))(this, condition, optionalValue, animate);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_HIDEIFATTRIBUTE_SET_MEMBERNAME_OFFSET))(this, value);
		}
	};
}
