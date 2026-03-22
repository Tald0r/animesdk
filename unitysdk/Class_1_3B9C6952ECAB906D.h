#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define CLASS_1_3B9C6952ECAB906D_METHOD_1_235F2F68A3E18565_1_OFFSET UNITYSDK_OFFSET(0xBA797B0)
#define CLASS_1_3B9C6952ECAB906D_METHOD_1_235F2F68A3E18565_OFFSET UNITYSDK_OFFSET(0xBA79670)
#define CLASS_1_3B9C6952ECAB906D_METHOD_1_86D9E07BD0992AFF_OFFSET UNITYSDK_OFFSET(0xBA798E0)
#define CLASS_1_3B9C6952ECAB906D_METHOD_1_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xBA7A300)
#define CLASS_1_3B9C6952ECAB906D_METHOD_1_9CA5A80F6B5B9E01_1_OFFSET UNITYSDK_OFFSET(0xBA797A0)
#define CLASS_1_3B9C6952ECAB906D_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0xBA795C0)
#define CLASS_1_3B9C6952ECAB906D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBA795D0)
#define CLASS_1_3B9C6952ECAB906D_METHOD_1_FF9D70DA28C905A2_OFFSET UNITYSDK_OFFSET(0xBA7A6E0)
#define CLASS_1_3B9C6952ECAB906D__CTOR_OFFSET UNITYSDK_OFFSET(0xBA795B0)

inline static constexpr unsigned int Class_1_3B9C6952ECAB906D_TypeDefinitionIndex = 59641;

class Class_1_3B9C6952ECAB906D : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_5; // 0x10
	::UnityEngine::GameObject* Field_1_6; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* Field_1_11; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_12; // 0x28
	::Foundation::AssetPath Field_1_1; // 0x30
	::Foundation::AssetPath Field_1_0; // 0x40
	::System::Int32 Field_1_2; // 0x50
	::System::Int32 Field_1_3; // 0x54
	::System::UInt32 Field_1_13; // 0x58
	::MoleMole::Config::EntityType Field_1_4; // 0x5C
	::System::Boolean Field_1_9; // 0x60
	::System::Boolean Field_1_10; // 0x61
	::System::Boolean Field_1_8; // 0x62
	::System::Boolean Field_1_7; // 0x63

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B9C6952ECAB906D__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B9C6952ECAB906D_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B9C6952ECAB906D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_235F2F68A3E18565(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3B9C6952ECAB906D_METHOD_1_235F2F68A3E18565_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01_1()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B9C6952ECAB906D_METHOD_1_9CA5A80F6B5B9E01_1_OFFSET))(this);
	}

	::System::Void Method_1_235F2F68A3E18565_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_3B9C6952ECAB906D_METHOD_1_235F2F68A3E18565_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_86D9E07BD0992AFF(::UnityEngine::Color a1, ::System::Single a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Color a4, ::UnityEngine::Cubemap* a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Color, ::UnityEngine::Cubemap*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_3B9C6952ECAB906D_METHOD_1_86D9E07BD0992AFF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B9C6952ECAB906D_METHOD_1_885DF4DA0F709E3E_OFFSET))(this);
	}

	::System::Void Method_1_FF9D70DA28C905A2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3B9C6952ECAB906D_METHOD_1_FF9D70DA28C905A2_OFFSET))(this, a1);
	}
};
