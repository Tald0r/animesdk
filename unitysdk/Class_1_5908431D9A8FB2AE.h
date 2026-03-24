#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileInfo.h"
#include "unitysdk/Class_1_5908431D9A8FB2AE_Struct_2_87B41F269C9BEEBB.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_468101999ADA762F;
class Class_1_6B726127E0C2F7BF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_5908431D9A8FB2AE_METHOD_1_123B9BEBCFBEA5D0_OFFSET UNITYSDK_OFFSET(0x1A0D5EE0)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_66D65081E4B39592_OFFSET UNITYSDK_OFFSET(0x1A0D4BC0)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_9A2A9A8FD6B5D017_OFFSET UNITYSDK_OFFSET(0x1A0D5C10)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x1A0D5C90)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1A0D5810)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x1A0D6610)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_E9C16E203CD4DBF0_OFFSET UNITYSDK_OFFSET(0x1A0D5000)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x1A0D59E0)
#define CLASS_1_5908431D9A8FB2AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D4A80)

inline static constexpr unsigned int Class_1_5908431D9A8FB2AE_TypeDefinitionIndex = 31850;

class Class_1_5908431D9A8FB2AE : public ::System::Object
{
public:
	static ::Class_1_5908431D9A8FB2AE** StaticGet_Field_1_2()
	{
		return (::Class_1_5908431D9A8FB2AE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5908431D9A8FB2AE_TypeDefinitionIndex)->GetStaticField(0x24FC0);
	}
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Class_1_5908431D9A8FB2AE_Struct_2_87B41F269C9BEEBB<::Class_1_6B726127E0C2F7BF*>>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Class_1_6B726127E0C2F7BF*>* Field_1_0; // 0x18
	::Class_1_468101999ADA762F* Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_66D65081E4B39592(::BinaryBundleLib::Runtime::BinaryBundleFileInfo a1, ::Class_1_6B726127E0C2F7BF*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Class_1_6B726127E0C2F7BF*&))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_66D65081E4B39592_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E9C16E203CD4DBF0(::Class_1_6B726127E0C2F7BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B726127E0C2F7BF*))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_E9C16E203CD4DBF0_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	::Class_1_468101999ADA762F* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_468101999ADA762F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_6B726127E0C2F7BF*>* Method_1_9A2A9A8FD6B5D017()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_6B726127E0C2F7BF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_9A2A9A8FD6B5D017_OFFSET))(this);
	}

	static ::Class_1_5908431D9A8FB2AE* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_5908431D9A8FB2AE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::System::Void Method_1_123B9BEBCFBEA5D0(::Class_1_6B726127E0C2F7BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B726127E0C2F7BF*))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_123B9BEBCFBEA5D0_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}
};
