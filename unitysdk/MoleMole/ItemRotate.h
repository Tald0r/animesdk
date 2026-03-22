#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_ITEMROTATE_START_OFFSET UNITYSDK_OFFSET(0x8F17B80)
#define MOLEMOLE_ITEMROTATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x8F17BE0)
#define MOLEMOLE_ITEMROTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F17DA0)

namespace MoleMole
{
	inline static constexpr unsigned int ItemRotate_TypeDefinitionIndex = 66416;

	class ItemRotate : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 RotateSpeed; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMROTATE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMROTATE_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMROTATE_UPDATE_OFFSET))(this);
		}
	};
}
