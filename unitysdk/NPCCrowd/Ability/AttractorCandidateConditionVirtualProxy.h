#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeConditionVirtualProxy.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeLinker.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"
#include "unitysdk/UnrealTypes/FStructView.h"

#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY_COMPILE_OFFSET UNITYSDK_OFFSET(0xA104300)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xA1044A0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY_LINK_OFFSET UNITYSDK_OFFSET(0xA104380)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xA104570)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xA104650)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY___BASE_COMPILE_OFFSET UNITYSDK_OFFSET(0xA104660)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0xA104670)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY___BASE_LINK_OFFSET UNITYSDK_OFFSET(0xA1046D0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY___BASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xA1046E0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorCandidateConditionVirtualProxy_TypeDefinitionIndex = 53806;

	class AttractorCandidateConditionVirtualProxy : public ::StateTreeCore::StateTreeConditionVirtualProxy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY__CTOR_OFFSET))(this);
		}

		::UnrealTypes::DataValidationResult Compile(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY_COMPILE_OFFSET))(this, self, instanceDataView);
		}

		::System::Boolean Link(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY_LINK_OFFSET))(this, self, linker);
		}

		::UnrealTypes::FStructHandle GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean TestCondition(::UnrealTypes::FStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY_TESTCONDITION_OFFSET))(this, self, context);
		}

		::UnrealTypes::DataValidationResult __base_Compile(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeDataView P1)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY___BASE_COMPILE_OFFSET))(this, P0, P1);
		}

		::UnrealTypes::FStructHandle __base_GetInstanceDataType()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY___BASE_GETINSTANCEDATATYPE_OFFSET))(this);
		}

		::System::Boolean __base_Link(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeLinker& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY___BASE_LINK_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_TestCondition(::UnrealTypes::FStructView& P0, ::StateTreeCore::StateTreeExecutionContext& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITIONVIRTUALPROXY___BASE_TESTCONDITION_OFFSET))(this, P0, P1);
		}
	};
}
