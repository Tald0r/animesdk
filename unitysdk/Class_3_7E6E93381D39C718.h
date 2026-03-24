#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_D89CCC627A66D0AD;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_7E6E93381D39C718_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x87B7B20)
#define CLASS_3_7E6E93381D39C718_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x87B7C30)
#define CLASS_3_7E6E93381D39C718_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x87B7D00)
#define CLASS_3_7E6E93381D39C718_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x87B7D60)
#define CLASS_3_7E6E93381D39C718_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x87B7AB0)
#define CLASS_3_7E6E93381D39C718__CCTOR_OFFSET UNITYSDK_OFFSET(0x87B7B80)
#define CLASS_3_7E6E93381D39C718__CTOR_OFFSET UNITYSDK_OFFSET(0x87B7C20)

inline static constexpr unsigned int Class_3_7E6E93381D39C718_TypeDefinitionIndex = 41794;

class Class_3_7E6E93381D39C718 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	static ::System::String** StaticGet_Field_3_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_3_7E6E93381D39C718_TypeDefinitionIndex)->GetStaticField(0x2FC90);
	}
	// static const ::System::Int32 Field_3_6 = 0xBF; // 0x0
	::System::Collections::Generic::List_1<::Class_2_D89CCC627A66D0AD*>* Field_3_0; // 0x48
	::System::Action* Field_3_3; // 0x50
	::System::Action* Field_3_4; // 0x58
	::System::Boolean Field_3_2; // 0x60
	::UnityEngine::Vector3 Field_3_1; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_7E6E93381D39C718__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E6E93381D39C718__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E6E93381D39C718_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E6E93381D39C718_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E6E93381D39C718_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7E6E93381D39C718_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_7E6E93381D39C718* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_7E6E93381D39C718*(*)())((::PBYTE)hIl2Cpp + CLASS_3_7E6E93381D39C718_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
