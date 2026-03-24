#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define MONOGALGAME3D_GET_Z_OFFSET UNITYSDK_OFFSET(0x7BF09A0)
#define MONOGALGAME3D_SET_MOUSEPOSITION_OFFSET UNITYSDK_OFFSET(0x7BF08E0)
#define MONOGALGAME3D_START_OFFSET UNITYSDK_OFFSET(0x7BF09B0)
#define MONOGALGAME3D_UPDATE_OFFSET UNITYSDK_OFFSET(0x7BF0A40)
#define MONOGALGAME3D__CTOR_OFFSET UNITYSDK_OFFSET(0x7BF0CD0)

inline static constexpr unsigned int MonoGalGame3D_TypeDefinitionIndex = 59064;

class MonoGalGame3D : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single m_RollXMaxAngle; // 0x18
	::System::Single m_RollYMaxAngle; // 0x1C
	::UnityEngine::Vector2 m_MousePosition; // 0x20
	::System::Single m_Z; // 0x28
	::UnityEngine::RectTransform* m_RectTransform; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGALGAME3D__CTOR_OFFSET))(this);
	}

	::System::Void set_MousePosition(::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOGALGAME3D_SET_MOUSEPOSITION_OFFSET))(this, value);
	}

	::System::Single get_Z()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGALGAME3D_GET_Z_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGALGAME3D_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGALGAME3D_UPDATE_OFFSET))(this);
	}
};
