#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Animator; }

#define CLASS_1_9EA76784658428B7_METHOD_1_0EB2899F45F512FE_OFFSET UNITYSDK_OFFSET(0x6D5D4D0)
#define CLASS_1_9EA76784658428B7_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x6D5D830)
#define CLASS_1_9EA76784658428B7_METHOD_1_4C7AA62905DC1988_OFFSET UNITYSDK_OFFSET(0x6D5CD60)
#define CLASS_1_9EA76784658428B7_METHOD_1_7353188A6E11C60F_OFFSET UNITYSDK_OFFSET(0x6D5D0E0)
#define CLASS_1_9EA76784658428B7_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x6D5D180)
#define CLASS_1_9EA76784658428B7_METHOD_1_9DBD6035FFABEE8F_OFFSET UNITYSDK_OFFSET(0x6D5D5B0)
#define CLASS_1_9EA76784658428B7_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x6D5C500)
#define CLASS_1_9EA76784658428B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x6D5D480)
#define CLASS_1_9EA76784658428B7__CTOR_OFFSET UNITYSDK_OFFSET(0x6D5D470)

inline static constexpr unsigned int Class_1_9EA76784658428B7_TypeDefinitionIndex = 60093;

class Class_1_9EA76784658428B7 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EA76784658428B7_TypeDefinitionIndex)->GetStaticField(0x10420);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9EA76784658428B7_TypeDefinitionIndex)->GetStaticField(0x10424);
	}
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_6 = 0xA; // 0x0
	::UnityEngine::Animator* Field_1_10; // 0x10
	::System::Threading::CancellationTokenSource* Field_1_14; // 0x18
	::MoleMole::EntityHandle Field_1_9; // 0x20
	::System::Int32 Field_1_12; // 0x30
	::System::Int32 Field_1_13; // 0x34
	::UnityEngine::Vector3 Field_1_7; // 0x38
	::System::Boolean Field_1_11; // 0x44
	::UnityEngine::Vector3 Field_1_8; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EA76784658428B7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9EA76784658428B7__CCTOR_OFFSET))();
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EA76784658428B7_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EA76784658428B7_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Boolean Method_1_0EB2899F45F512FE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EA76784658428B7_METHOD_1_0EB2899F45F512FE_OFFSET))(this);
	}

	::System::Int32 Method_1_9DBD6035FFABEE8F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EA76784658428B7_METHOD_1_9DBD6035FFABEE8F_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EA76784658428B7_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_7353188A6E11C60F(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_9EA76784658428B7_METHOD_1_7353188A6E11C60F_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C7AA62905DC1988(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_9EA76784658428B7_METHOD_1_4C7AA62905DC1988_OFFSET))(this, a1);
	}
};
