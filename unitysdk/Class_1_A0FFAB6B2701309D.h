#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoStageEnv; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define CLASS_1_A0FFAB6B2701309D_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x78393B0)
#define CLASS_1_A0FFAB6B2701309D_METHOD_1_6BD1998F5EC6ED27_OFFSET UNITYSDK_OFFSET(0x7838DE0)
#define CLASS_1_A0FFAB6B2701309D_METHOD_1_719E29E2FFE6DB6E_OFFSET UNITYSDK_OFFSET(0x7839590)
#define CLASS_1_A0FFAB6B2701309D_METHOD_1_8DE3341F7BADEC1B_OFFSET UNITYSDK_OFFSET(0x7839160)
#define CLASS_1_A0FFAB6B2701309D_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x7838C90)
#define CLASS_1_A0FFAB6B2701309D__CTOR_OFFSET UNITYSDK_OFFSET(0x7838C60)

inline static constexpr unsigned int Class_1_A0FFAB6B2701309D_TypeDefinitionIndex = 49625;

class Class_1_A0FFAB6B2701309D : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshData* Field_1_2; // 0x10
	::UnityEngine::AI::NavMeshSurface* Field_1_0; // 0x18
	::UnityEngine::AI::NavMeshPath* Field_1_3; // 0x20
	::UnityEngine::AI::NavMeshDataInstance Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0FFAB6B2701309D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0FFAB6B2701309D_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Boolean Method_1_6BD1998F5EC6ED27(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a3, ::Il2CppArray<::UnityEngine::Vector3>*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_A0FFAB6B2701309D_METHOD_1_6BD1998F5EC6ED27_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_8DE3341F7BADEC1B(::UnityEngine::AI::NavMeshSurface* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshSurface*))((::PBYTE)hIl2Cpp + CLASS_1_A0FFAB6B2701309D_METHOD_1_8DE3341F7BADEC1B_OFFSET))(this, a1);
	}

	::System::Void Method_1_719E29E2FFE6DB6E(::MoleMole::MonoStageEnv* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoStageEnv*))((::PBYTE)hIl2Cpp + CLASS_1_A0FFAB6B2701309D_METHOD_1_719E29E2FFE6DB6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0FFAB6B2701309D_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}
};
