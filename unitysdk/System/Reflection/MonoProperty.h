#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/MonoPropertyInfo.h"
#include "unitysdk/System/Reflection/PInfo.h"
#include "unitysdk/System/Reflection/PropertyAttributes.h"
#include "unitysdk/System/Reflection/RuntimePropertyInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class MonoProperty_GetterAdapter; }
namespace System::Reflection { class ParameterInfo; }
namespace System::Reflection { template <typename T1, typename T2> class MonoProperty_Getter_2; }
namespace System::Reflection { template <typename T> class MonoProperty_StaticGetter_1; }

#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_12DA696B15A6370D_OFFSET UNITYSDK_OFFSET(0x192BB8F0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x192BB960)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x192BB920)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_49D29DF713180894_1_OFFSET UNITYSDK_OFFSET(0x192BBA80)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_49D29DF713180894_OFFSET UNITYSDK_OFFSET(0x192BBA50)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_5C95806762EFF33D_OFFSET UNITYSDK_OFFSET(0x192BC080)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_6148F4753B6872B6_OFFSET UNITYSDK_OFFSET(0x192BC030)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_72CC23172712C8A6_OFFSET UNITYSDK_OFFSET(0x192BC220)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x192BC4D0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x192BC450)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_B080FE6CC13DF58A_OFFSET UNITYSDK_OFFSET(0x192BB8C0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_BAFB4C2F15085034_OFFSET UNITYSDK_OFFSET(0x192BBAE0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_BDE09E9911BF904B_OFFSET UNITYSDK_OFFSET(0x192BB9A0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_C0B669C1C81DA065_OFFSET UNITYSDK_OFFSET(0x192BC020)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_C4EB06C822AF655A_OFFSET UNITYSDK_OFFSET(0x192BBDD0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_CABA3E30AEE242B2_OFFSET UNITYSDK_OFFSET(0x192BC040)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_D2D7B48E5CB284C7_OFFSET UNITYSDK_OFFSET(0x192BC010)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x192BBAB0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_F233C8CA1CBA6C47_1_OFFSET UNITYSDK_OFFSET(0x192BBFB0)
#define SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_F233C8CA1CBA6C47_OFFSET UNITYSDK_OFFSET(0x192BBD70)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoProperty_TypeDefinitionIndex = 603;

	class MonoProperty : public ::System::Reflection::RuntimePropertyInfo
	{
	public:
		::System::IntPtr Field_4_0; // 0x10
		::System::IntPtr Field_4_1; // 0x18
		::System::Reflection::MonoPropertyInfo Field_4_2; // 0x20
		::System::Reflection::PInfo Field_4_3; // 0x50
		::System::Reflection::MonoProperty_GetterAdapter* Field_4_4; // 0x58

		::System::Void Method_4_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_4_B080FE6CC13DF58A(::System::Reflection::PInfo flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::PInfo))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_B080FE6CC13DF58A_OFFSET))(this, flags);
		}

		::System::Reflection::PropertyAttributes Method_4_12DA696B15A6370D()
		{
			return ((::System::Reflection::PropertyAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_12DA696B15A6370D_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Type* Method_4_BDE09E9911BF904B()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_BDE09E9911BF904B_OFFSET))(this);
		}

		::System::Type* Method_4_49D29DF713180894()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_49D29DF713180894_OFFSET))(this);
		}

		::System::Type* Method_4_49D29DF713180894_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_49D29DF713180894_1_OFFSET))(this);
		}

		::System::String* Method_4_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::Il2CppArray<::System::Reflection::MethodInfo*>* Method_4_BAFB4C2F15085034(::System::Boolean nonPublic)
		{
			return ((::Il2CppArray<::System::Reflection::MethodInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_BAFB4C2F15085034_OFFSET))(this, nonPublic);
		}

		::System::Reflection::MethodInfo* Method_4_F233C8CA1CBA6C47(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_F233C8CA1CBA6C47_OFFSET))(this, nonPublic);
		}

		::Il2CppArray<::System::Reflection::ParameterInfo*>* Method_4_C4EB06C822AF655A()
		{
			return ((::Il2CppArray<::System::Reflection::ParameterInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_C4EB06C822AF655A_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_4_F233C8CA1CBA6C47_1(::System::Boolean nonPublic)
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_F233C8CA1CBA6C47_1_OFFSET))(this, nonPublic);
		}

		::System::Boolean Method_4_D2D7B48E5CB284C7(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_D2D7B48E5CB284C7_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_C0B669C1C81DA065(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_C0B669C1C81DA065_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_4_6148F4753B6872B6(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_6148F4753B6872B6_OFFSET))(this, attributeType, inherit);
		}

		::System::Object* Method_4_CABA3E30AEE242B2(::System::Object* obj, ::Il2CppArray<::System::Object*>* index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_CABA3E30AEE242B2_OFFSET))(this, obj, index);
		}

		::System::Object* Method_4_5C95806762EFF33D(::System::Object* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_5C95806762EFF33D_OFFSET))(this, obj, invokeAttr, binder, index, culture);
		}

		::System::Void Method_4_72CC23172712C8A6(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppArray<::System::Object*>* index, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_72CC23172712C8A6_OFFSET))(this, obj, value, invokeAttr, binder, index, culture);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_4_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOPROPERTY_METHOD_4_A3C117624446E448_OFFSET))(this);
		}
	};
}
