#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/BindingFlags.h"
#include "unitysdk/System/Reflection/FieldAttributes.h"
#include "unitysdk/System/Reflection/RtFieldInfo.h"
#include "unitysdk/System/RuntimeFieldHandle.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Globalization { class CultureInfo; }
namespace System::Reflection { class Binder; }
namespace System::Reflection { class CustomAttributeData; }
namespace System::Reflection { class FieldInfo; }

#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x19888960)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19888680)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_2D8AE2AF2AC0AF1B_OFFSET UNITYSDK_OFFSET(0x19888C50)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x198888F0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5C90471BE03E101A_1_OFFSET UNITYSDK_OFFSET(0x19888660)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5C90471BE03E101A_OFFSET UNITYSDK_OFFSET(0x19888650)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_6148F4753B6872B6_OFFSET UNITYSDK_OFFSET(0x198886B0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_8004D4ED772C50A9_OFFSET UNITYSDK_OFFSET(0x198889B0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x19888CE0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_9D7D8F2241FBF4CA_OFFSET UNITYSDK_OFFSET(0x19888730)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A3C117624446E448_OFFSET UNITYSDK_OFFSET(0x19888C60)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x19888610)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x19888600)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_C0B669C1C81DA065_OFFSET UNITYSDK_OFFSET(0x198886A0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D2D7B48E5CB284C7_OFFSET UNITYSDK_OFFSET(0x19888690)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D702C669788B2208_OFFSET UNITYSDK_OFFSET(0x198886F0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_E1A4F7D5DAA182CE_OFFSET UNITYSDK_OFFSET(0x19888620)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_E355D97774246C20_OFFSET UNITYSDK_OFFSET(0x198889C0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_EF4CA801247CB4D4_OFFSET UNITYSDK_OFFSET(0x198885E0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x198886C0)
#define SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F9ADD3A7AD93E733_OFFSET UNITYSDK_OFFSET(0x198885F0)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoField_TypeDefinitionIndex = 590;

	class MonoField : public ::System::Reflection::RtFieldInfo
	{
	public:
		::System::IntPtr Field_5_0; // 0x10
		::System::RuntimeFieldHandle Field_5_1; // 0x18
		::System::String* Field_5_2; // 0x20
		::System::Type* Field_5_3; // 0x28
		::System::Reflection::FieldAttributes Field_5_4; // 0x30

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Reflection::FieldAttributes Method_5_EF4CA801247CB4D4()
		{
			return ((::System::Reflection::FieldAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_EF4CA801247CB4D4_OFFSET))(this);
		}

		::System::RuntimeFieldHandle Method_5_F9ADD3A7AD93E733()
		{
			return ((::System::RuntimeFieldHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F9ADD3A7AD93E733_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Type* Method_5_E1A4F7D5DAA182CE(::System::Boolean declaring)
		{
			return ((::System::Type*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_E1A4F7D5DAA182CE_OFFSET))(this, declaring);
		}

		::System::Type* Method_5_5C90471BE03E101A()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5C90471BE03E101A_OFFSET))(this);
		}

		::System::Type* Method_5_5C90471BE03E101A_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_5C90471BE03E101A_1_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Boolean Method_5_D2D7B48E5CB284C7(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D2D7B48E5CB284C7_OFFSET))(this, attributeType, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_C0B669C1C81DA065(::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_C0B669C1C81DA065_OFFSET))(this, inherit);
		}

		::Il2CppArray<::System::Object*>* Method_5_6148F4753B6872B6(::System::Type* attributeType, ::System::Boolean inherit)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_6148F4753B6872B6_OFFSET))(this, attributeType, inherit);
		}

		::System::Int32 Method_5_F5599B7DA8E7E53C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_F5599B7DA8E7E53C_OFFSET))(this);
		}

		::System::Object* Method_5_D702C669788B2208(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_D702C669788B2208_OFFSET))(this, obj);
		}

		::System::Object* Method_5_9D7D8F2241FBF4CA(::System::Object* obj)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_9D7D8F2241FBF4CA_OFFSET))(this, obj);
		}

		::System::String* Method_5_126AB3935214AA22_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_126AB3935214AA22_1_OFFSET))(this);
		}

		static ::System::Void Method_5_8004D4ED772C50A9(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_8004D4ED772C50A9_OFFSET))(fi, obj, value);
		}

		::System::Void Method_5_E355D97774246C20(::System::Object* obj, ::System::Object* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::System::Globalization::CultureInfo* culture)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_E355D97774246C20_OFFSET))(this, obj, val, invokeAttr, binder, culture);
		}

		::System::Object* Method_5_2D8AE2AF2AC0AF1B()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_2D8AE2AF2AC0AF1B_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* Method_5_A3C117624446E448()
		{
			return ((::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_A3C117624446E448_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOFIELD_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
