#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_FDC3B0EBA614E5EA_METHOD_1_361556CCCA142AF9_OFFSET UNITYSDK_OFFSET(0x681D640)
#define CLASS_1_FDC3B0EBA614E5EA_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x681DD10)
#define CLASS_1_FDC3B0EBA614E5EA_METHOD_1_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x681D900)
#define CLASS_1_FDC3B0EBA614E5EA_METHOD_1_7353188A6E11C60F_OFFSET UNITYSDK_OFFSET(0x681D860)
#define CLASS_1_FDC3B0EBA614E5EA_METHOD_1_9DBD6035FFABEE8F_OFFSET UNITYSDK_OFFSET(0x681DED0)
#define CLASS_1_FDC3B0EBA614E5EA_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x681DD70)
#define CLASS_1_FDC3B0EBA614E5EA_METHOD_1_EFDE274FAF89F595_OFFSET UNITYSDK_OFFSET(0x681DE00)
#define CLASS_1_FDC3B0EBA614E5EA_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x681CDE0)
#define CLASS_1_FDC3B0EBA614E5EA__CTOR_OFFSET UNITYSDK_OFFSET(0x681DD00)

inline static constexpr unsigned int Class_1_FDC3B0EBA614E5EA_TypeDefinitionIndex = 46974;

class Class_1_FDC3B0EBA614E5EA : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x3; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::Int32 Field_1_4 = 0xA; // 0x0
	::MoleMole::EntityHandle Field_1_7; // 0x10
	::System::Threading::CancellationTokenSource* Field_1_10; // 0x20
	::System::Int32 Field_1_9; // 0x28
	::System::Int32 Field_1_8; // 0x2C
	::UnityEngine::Vector3 Field_1_6; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_1_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_METHOD_1_66F42CE2EDA79734_OFFSET))(this);
	}

	static ::System::Void Method_1_361556CCCA142AF9(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_METHOD_1_361556CCCA142AF9_OFFSET))(a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_1_EFDE274FAF89F595(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_METHOD_1_EFDE274FAF89F595_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid Method_1_7353188A6E11C60F(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_METHOD_1_7353188A6E11C60F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_9DBD6035FFABEE8F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC3B0EBA614E5EA_METHOD_1_9DBD6035FFABEE8F_OFFSET))(this);
	}
};
