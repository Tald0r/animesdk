#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_432942E6E9915B35.h"
#include "unitysdk/Enum_3_4C4816AD446DEFA2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_90AB80EAF453E31E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xB843540)
#define CLASS_3_90AB80EAF453E31E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB8436D0)
#define CLASS_3_90AB80EAF453E31E_METHOD_3_A37C4459569BE98C_OFFSET UNITYSDK_OFFSET(0xB843730)
#define CLASS_3_90AB80EAF453E31E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xB843630)
#define CLASS_3_90AB80EAF453E31E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xB843440)
#define CLASS_3_90AB80EAF453E31E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8435A0)
#define CLASS_3_90AB80EAF453E31E__CTOR_OFFSET UNITYSDK_OFFSET(0xB843620)

inline static constexpr unsigned int Class_3_90AB80EAF453E31E_TypeDefinitionIndex = 58903;

class Class_3_90AB80EAF453E31E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_12 = 0xB0; // 0x0
	::System::Action* Field_3_11; // 0x48
	::System::String* Field_3_2; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_0; // 0x58
	::System::Single Field_3_5; // 0x60
	::Enum_3_432942E6E9915B35 Field_3_7; // 0x64
	::System::Single Field_3_8; // 0x68
	::System::Int32 Field_3_4; // 0x6C
	::System::Single Field_3_3; // 0x70
	::Enum_3_4C4816AD446DEFA2 Field_3_1; // 0x74
	::System::Single Field_3_6; // 0x78
	::System::Boolean Field_3_10; // 0x7C
	::System::Single Field_3_9; // 0x80

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_90AB80EAF453E31E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90AB80EAF453E31E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90AB80EAF453E31E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90AB80EAF453E31E_GETCLASSID_OFFSET))(this);
	}

	static ::Class_3_90AB80EAF453E31E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_90AB80EAF453E31E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_90AB80EAF453E31E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90AB80EAF453E31E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_A37C4459569BE98C(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::Enum_3_4C4816AD446DEFA2 a2, ::System::String* a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6, ::System::Single a7, ::Enum_3_432942E6E9915B35 a8, ::System::Single a9, ::System::Single a10, ::System::Boolean a11, ::System::Action* a12)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Enum_3_4C4816AD446DEFA2, ::System::String*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single, ::Enum_3_432942E6E9915B35, ::System::Single, ::System::Single, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_3_90AB80EAF453E31E_METHOD_3_A37C4459569BE98C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}
};
