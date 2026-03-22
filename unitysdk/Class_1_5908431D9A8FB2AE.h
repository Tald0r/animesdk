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

#define CLASS_1_5908431D9A8FB2AE_METHOD_1_123B9BEBCFBEA5D0_OFFSET UNITYSDK_OFFSET(0x19B02C20)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_66D65081E4B39592_OFFSET UNITYSDK_OFFSET(0x19B15040)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_9A2A9A8FD6B5D017_OFFSET UNITYSDK_OFFSET(0x19B15C80)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x19B02A00)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x19B15D00)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_C293B8F3ADB851B9_OFFSET UNITYSDK_OFFSET(0x19B15BD0)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_E9C16E203CD4DBF0_OFFSET UNITYSDK_OFFSET(0x19B0A810)
#define CLASS_1_5908431D9A8FB2AE_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x19B02A70)
#define CLASS_1_5908431D9A8FB2AE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1A8D0)

inline static constexpr unsigned int Class_1_5908431D9A8FB2AE_TypeDefinitionIndex = 30884;

class Class_1_5908431D9A8FB2AE : public ::System::Object
{
public:
	static ::Class_1_5908431D9A8FB2AE** StaticGet_Field_1_2()
	{
		return (::Class_1_5908431D9A8FB2AE**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5908431D9A8FB2AE_TypeDefinitionIndex)->GetStaticField(0x237A0);
	}
	::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Class_1_5908431D9A8FB2AE_Struct_2_87B41F269C9BEEBB<::Class_1_6B726127E0C2F7BF*>>* Field_1_1; // 0x10
	::Class_1_468101999ADA762F* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Class_1_6B726127E0C2F7BF*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_123B9BEBCFBEA5D0(::Class_1_6B726127E0C2F7BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B726127E0C2F7BF*))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_123B9BEBCFBEA5D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9C16E203CD4DBF0(::Class_1_6B726127E0C2F7BF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6B726127E0C2F7BF*))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_E9C16E203CD4DBF0_OFFSET))(this, a1);
	}

	static ::Class_1_5908431D9A8FB2AE* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_5908431D9A8FB2AE*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	static ::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_B1936CE4DA97AA45_OFFSET))();
	}

	::System::Boolean Method_1_66D65081E4B39592(::BinaryBundleLib::Runtime::BinaryBundleFileInfo a1, ::Class_1_6B726127E0C2F7BF*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::Class_1_6B726127E0C2F7BF*&))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_66D65081E4B39592_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_C293B8F3ADB851B9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_C293B8F3ADB851B9_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_6B726127E0C2F7BF*>* Method_1_9A2A9A8FD6B5D017()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_6B726127E0C2F7BF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_9A2A9A8FD6B5D017_OFFSET))(this);
	}

	::Class_1_468101999ADA762F* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_468101999ADA762F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5908431D9A8FB2AE_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
