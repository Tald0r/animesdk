#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/SolverManager.h"

namespace RootMotion::FinalIK { class IKSolver; }

#define ROOTMOTION_FINALIK_IK_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1AA57F90)
#define ROOTMOTION_FINALIK_IK_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0x1AA57F20)
#define ROOTMOTION_FINALIK_IK_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0x1AA57E60)
#define ROOTMOTION_FINALIK_IK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA57FF0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IK_TypeDefinitionIndex = 35037;

	class IK : public ::RootMotion::SolverManager
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK__CTOR_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_UPDATESOLVER_OFFSET))(this);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_FIXTRANSFORMS_OFFSET))(this);
		}
	};
}
