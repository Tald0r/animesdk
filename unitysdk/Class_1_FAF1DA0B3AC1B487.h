#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_146B801758087363.h"
#include "unitysdk/Struct_2_B850E47831238E71.h"
#include "unitysdk/Struct_2_D8F88283138BF2F0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_0A48C0117A1B22E8;
namespace MoleMole { class UIAvatarLightSetting; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FAF1DA0B3AC1B487_METHOD_1_25F93AC3DD23C2B8_OFFSET UNITYSDK_OFFSET(0x7684780)
#define CLASS_1_FAF1DA0B3AC1B487_METHOD_1_5F25301459C8026F_OFFSET UNITYSDK_OFFSET(0x7685850)
#define CLASS_1_FAF1DA0B3AC1B487_METHOD_1_C624F9644D703120_OFFSET UNITYSDK_OFFSET(0x7684860)
#define CLASS_1_FAF1DA0B3AC1B487_METHOD_1_F0F2FBA3D893E87B_OFFSET UNITYSDK_OFFSET(0x7684FE0)
#define CLASS_1_FAF1DA0B3AC1B487__CTOR_OFFSET UNITYSDK_OFFSET(0x7684770)

inline static constexpr unsigned int Class_1_FAF1DA0B3AC1B487_TypeDefinitionIndex = 80305;

class Class_1_FAF1DA0B3AC1B487 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::Struct_2_D8F88283138BF2F0 Field_1_4; // 0x18
	::Struct_2_B850E47831238E71 Field_1_3; // 0x80
	::Struct_2_146B801758087363 Field_1_2; // 0xA8
	::Class_1_0A48C0117A1B22E8* Field_1_0; // 0xE0
	::UnityEngine::Vector2 Field_1_5; // 0xE8
	::UnityEngine::Quaternion Field_1_7; // 0xF0
	::UnityEngine::Quaternion Field_1_6; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAF1DA0B3AC1B487__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25F93AC3DD23C2B8(::Class_1_0A48C0117A1B22E8* a1, ::UnityEngine::Light* a2, ::MoleMole::UIAvatarLightSetting* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*, ::UnityEngine::Light*, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + CLASS_1_FAF1DA0B3AC1B487_METHOD_1_25F93AC3DD23C2B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C624F9644D703120(::Class_1_0A48C0117A1B22E8* a1, ::MoleMole::UIAvatarLightSetting* a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Quaternion& a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_FAF1DA0B3AC1B487_METHOD_1_C624F9644D703120_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F0F2FBA3D893E87B(::System::Single a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Quaternion& a3, ::UnityEngine::Quaternion& a4, ::UnityEngine::Camera* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2&, ::UnityEngine::Quaternion&, ::UnityEngine::Quaternion&, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_FAF1DA0B3AC1B487_METHOD_1_F0F2FBA3D893E87B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_5F25301459C8026F(::Class_1_0A48C0117A1B22E8* a1, ::MoleMole::UIAvatarLightSetting* a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A48C0117A1B22E8*, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_FAF1DA0B3AC1B487_METHOD_1_5F25301459C8026F_OFFSET))(this, a1, a2, a3);
	}
};
