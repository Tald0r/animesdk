#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_0DE7EC2BC9304BF2.h"
#include "unitysdk/Enum_3_49EF25F4D4B1D75C.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_6A2D1CD07805DEFA.h"
#include "unitysdk/Struct_2_6E1B724B14572104_2.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8289F2785D9AA990;
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_3_912CA5D103261DFB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x822B130)
#define CLASS_3_912CA5D103261DFB_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x822B2C0)
#define CLASS_3_912CA5D103261DFB_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x822B4A0)
#define CLASS_3_912CA5D103261DFB_METHOD_3_BEAB6CF0CF797770_OFFSET UNITYSDK_OFFSET(0x822B350)
#define CLASS_3_912CA5D103261DFB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x822ADE0)
#define CLASS_3_912CA5D103261DFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x822B190)
#define CLASS_3_912CA5D103261DFB__CTOR_OFFSET UNITYSDK_OFFSET(0x822B210)

inline static constexpr unsigned int Class_3_912CA5D103261DFB_TypeDefinitionIndex = 49668;

class Class_3_912CA5D103261DFB : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_30 = 0x91; // 0x0
	::Foundation::AssetPath Field_3_11; // 0x48
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Struct_2_6A2D1CD07805DEFA>* Field_3_29; // 0x58
	::Class_1_8289F2785D9AA990* Field_3_24; // 0x60
	::Struct_2_FA5F50563E60AFBA Field_3_27; // 0x68
	::UnityEngine::Transform* Field_3_9; // 0x80
	::MoleMole::Config::CharacterAimModeConfig* Field_3_0; // 0x88
	::MoleMole::Cameras::ScopedOverShoulderCamera* Field_3_1; // 0x90
	::Struct_2_FA5F50563E60AFBA Field_3_21; // 0x98
	::Struct_2_FA5F50563E60AFBA Field_3_20; // 0xB0
	::System::Single Field_3_22; // 0xC8
	::Struct_2_6E1B724B14572104_2 Field_3_7; // 0xCC
	::UnityEngine::Vector2 Field_3_13; // 0xD0
	::System::Single Field_3_16; // 0xD8
	::System::Single Field_3_15; // 0xDC
	::UnityEngine::Vector2 Field_3_8; // 0xE0
	::System::Single Field_3_3; // 0xE8
	::System::Single Field_3_6; // 0xEC
	::System::Single Field_3_14; // 0xF0
	::UnityEngine::Quaternion Field_3_2; // 0xF4
	::System::Single Field_3_4; // 0x104
	::System::Single Field_3_18; // 0x108
	::System::Single Field_3_25; // 0x10C
	::UnityEngine::Vector2 Field_3_17; // 0x110
	::UnityEngine::Vector3 Field_3_19; // 0x118
	::UnityEngine::Vector2 Field_3_10; // 0x124
	::Enum_3_49EF25F4D4B1D75C Field_3_12; // 0x12C
	::System::Boolean Field_3_23; // 0x12D
	::System::Boolean Field_3_26; // 0x12E
	::Enum_3_0DE7EC2BC9304BF2 Field_3_28; // 0x12F
	::System::Single Field_3_5; // 0x130

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_912CA5D103261DFB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CA5D103261DFB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CA5D103261DFB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CA5D103261DFB_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CA5D103261DFB_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	static ::Class_3_912CA5D103261DFB* Method_3_BEAB6CF0CF797770()
	{
		return ((::Class_3_912CA5D103261DFB*(*)())((::PBYTE)hIl2Cpp + CLASS_3_912CA5D103261DFB_METHOD_3_BEAB6CF0CF797770_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_912CA5D103261DFB_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
