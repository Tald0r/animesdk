#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Nap::NapECS { class EcsEntity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_D8C31C60C6D7C7E8_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xD76BFE0)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_36D8543FC20E22FB_OFFSET UNITYSDK_OFFSET(0xD76C6C0)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_739FB74B4E389D76_OFFSET UNITYSDK_OFFSET(0xD76CF20)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_7A122D79831E0426_OFFSET UNITYSDK_OFFSET(0xD76CA00)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_7BD7569E9D724378_OFFSET UNITYSDK_OFFSET(0xD76CD20)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0xD76C210)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_88B0F637720F7E98_OFFSET UNITYSDK_OFFSET(0xD76C4C0)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_8EBC895BFDF8F242_OFFSET UNITYSDK_OFFSET(0xD76C0E0)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_A11144519902A27F_OFFSET UNITYSDK_OFFSET(0xD76D190)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD76D200)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_B5DAD987BD365CD3_OFFSET UNITYSDK_OFFSET(0xD76C810)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xD76C610)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_D15708DF941619D4_1_OFFSET UNITYSDK_OFFSET(0xD76CBA0)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_D15708DF941619D4_2_OFFSET UNITYSDK_OFFSET(0xD76D040)
#define CLASS_3_D8C31C60C6D7C7E8_METHOD_3_D15708DF941619D4_OFFSET UNITYSDK_OFFSET(0xD76C250)
#define CLASS_3_D8C31C60C6D7C7E8_ONADD_OFFSET UNITYSDK_OFFSET(0xD76BD70)
#define CLASS_3_D8C31C60C6D7C7E8_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xD76BF80)
#define CLASS_3_D8C31C60C6D7C7E8__CCTOR_OFFSET UNITYSDK_OFFSET(0xD76C040)
#define CLASS_3_D8C31C60C6D7C7E8__CTOR_OFFSET UNITYSDK_OFFSET(0xD76C0C0)

inline static constexpr unsigned int Class_3_D8C31C60C6D7C7E8_TypeDefinitionIndex = 65101;

class Class_3_D8C31C60C6D7C7E8 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0xC4; // 0x0
	::Foundation::AssetPath Field_3_0; // 0x48
	::UnityEngine::GameObject* Field_3_1; // 0x58
	::UnityEngine::Vector3 Field_3_2; // 0x60
	::UnityEngine::Vector3 Field_3_4; // 0x6C
	::UnityEngine::Vector3 Field_3_3; // 0x78

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_ONADD_OFFSET))(this, a1);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_8EBC895BFDF8F242(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_8EBC895BFDF8F242_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_7DFB4B9C80198D98_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_3_88B0F637720F7E98()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_88B0F637720F7E98_OFFSET))(this);
	}

	static ::Class_3_D8C31C60C6D7C7E8* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_D8C31C60C6D7C7E8*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_36D8543FC20E22FB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_36D8543FC20E22FB_OFFSET))(this, a1);
	}

	::System::Void Method_3_B5DAD987BD365CD3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Foundation::AssetPath a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_B5DAD987BD365CD3_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_3_D15708DF941619D4()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_D15708DF941619D4_OFFSET))(this);
	}

	::System::Void Method_3_7A122D79831E0426(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_7A122D79831E0426_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_3_D15708DF941619D4_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_D15708DF941619D4_1_OFFSET))(this);
	}

	::System::Void Method_3_7BD7569E9D724378(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_7BD7569E9D724378_OFFSET))(this, a1);
	}

	::System::Void Method_3_739FB74B4E389D76(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_739FB74B4E389D76_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_3_D15708DF941619D4_2()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_D15708DF941619D4_2_OFFSET))(this);
	}

	::System::Void Method_3_A11144519902A27F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_A11144519902A27F_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8C31C60C6D7C7E8_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
