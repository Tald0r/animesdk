#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/SolverManager.h"

namespace RootMotion::FinalIK { class Finger; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_FINGERRIG_ADDCHILDRENRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1AC692F0)
#define ROOTMOTION_FINALIK_FINGERRIG_ADDFINGER_OFFSET UNITYSDK_OFFSET(0x1AC69450)
#define ROOTMOTION_FINALIK_FINGERRIG_AUTODETECT_OFFSET UNITYSDK_OFFSET(0x1AC69050)
#define ROOTMOTION_FINALIK_FINGERRIG_FIXFINGERTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1AC69930)
#define ROOTMOTION_FINALIK_FINGERRIG_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1AC69A90)
#define ROOTMOTION_FINALIK_FINGERRIG_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1AC68FB0)
#define ROOTMOTION_FINALIK_FINGERRIG_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0x1AC697F0)
#define ROOTMOTION_FINALIK_FINGERRIG_ISVALID_OFFSET UNITYSDK_OFFSET(0x1AC68FD0)
#define ROOTMOTION_FINALIK_FINGERRIG_REMOVEFINGER_OFFSET UNITYSDK_OFFSET(0x1AC69630)
#define ROOTMOTION_FINALIK_FINGERRIG_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1AC68FC0)
#define ROOTMOTION_FINALIK_FINGERRIG_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1AC699B0)
#define ROOTMOTION_FINALIK_FINGERRIG_UPDATEFINGERSOLVERS_OFFSET UNITYSDK_OFFSET(0x1AC698C0)
#define ROOTMOTION_FINALIK_FINGERRIG_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0x1AC69A20)
#define ROOTMOTION_FINALIK_FINGERRIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC69B10)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FingerRig_TypeDefinitionIndex = 36016;

	class FingerRig : public ::RootMotion::SolverManager
	{
	public:
		::System::Single weight; // 0x48
		::Il2CppArray<::RootMotion::FinalIK::Finger*>* fingers; // 0x50
		::System::Boolean _initiated_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_SET_INITIATED_OFFSET))(this, value);
		}

		::System::Boolean IsValid(::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_ISVALID_OFFSET))(this, errorMessage);
		}

		::System::Void AutoDetect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_AUTODETECT_OFFSET))(this);
		}

		::System::Void AddFinger(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3, ::UnityEngine::Transform* tip, ::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_ADDFINGER_OFFSET))(this, bone1, bone2, bone3, tip, target);
		}

		::System::Void RemoveFinger(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_REMOVEFINGER_OFFSET))(this, index);
		}

		::System::Void AddChildrenRecursive(::UnityEngine::Transform* parent, ::Il2CppArray<::UnityEngine::Transform*>*& array)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_ADDCHILDRENRECURSIVE_OFFSET))(this, parent, array);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void UpdateFingerSolvers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_UPDATEFINGERSOLVERS_OFFSET))(this);
		}

		::System::Void FixFingerTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_FIXFINGERTRANSFORMS_OFFSET))(this);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_UPDATESOLVER_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FINGERRIG_FIXTRANSFORMS_OFFSET))(this);
		}
	};
}
