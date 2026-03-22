#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/SolverManager.h"

namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_POSER_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1A3D37E0)
#define ROOTMOTION_FINALIK_POSER_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0x1A3D37B0)
#define ROOTMOTION_FINALIK_POSER_UPDATEMANUAL_OFFSET UNITYSDK_OFFSET(0x1A3D3760)
#define ROOTMOTION_FINALIK_POSER_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0x1A3D3770)
#define ROOTMOTION_FINALIK_POSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D3800)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Poser_TypeDefinitionIndex = 35126;

	class Poser : public ::RootMotion::SolverManager
	{
	public:
		::UnityEngine::Transform* poseRoot; // 0x48
		::System::Single weight; // 0x50
		::System::Single localRotationWeight; // 0x54
		::System::Single localPositionWeight; // 0x58
		::System::Boolean initiated; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER_UPDATEMANUAL_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER_UPDATESOLVER_OFFSET))(this);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_POSER_FIXTRANSFORMS_OFFSET))(this);
		}
	};
}
