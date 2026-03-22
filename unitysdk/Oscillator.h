#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OSCILLATOR_START_OFFSET UNITYSDK_OFFSET(0xDDDD750)
#define OSCILLATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xDDDD800)
#define OSCILLATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xDDDD970)

inline static constexpr unsigned int Oscillator_TypeDefinitionIndex = 48089;

class Oscillator : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single m_Amplitude; // 0x18
	::System::Single m_Period; // 0x1C
	::UnityEngine::Vector3 m_Direction; // 0x20
	::UnityEngine::Vector3 m_StartPosition; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OSCILLATOR__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OSCILLATOR_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OSCILLATOR_UPDATE_OFFSET))(this);
	}
};
