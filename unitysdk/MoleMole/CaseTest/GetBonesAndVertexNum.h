#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_CASETEST_GETBONESANDVERTEXNUM_START_OFFSET UNITYSDK_OFFSET(0xB454FF0)
#define MOLEMOLE_CASETEST_GETBONESANDVERTEXNUM__CTOR_OFFSET UNITYSDK_OFFSET(0xB455640)

namespace MoleMole::CaseTest
{
	inline static constexpr unsigned int GetBonesAndVertexNum_TypeDefinitionIndex = 62040;

	class GetBonesAndVertexNum : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_GETBONESANDVERTEXNUM__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CASETEST_GETBONESANDVERTEXNUM_START_OFFSET))(this);
		}
	};
}
