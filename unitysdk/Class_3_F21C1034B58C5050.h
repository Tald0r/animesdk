#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_7.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_337A0D7142819EB2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

class Class_2_208CC9941471731A_240;
namespace MoleMole::Config { class ItemDropEffectSetting; }

#define CLASS_3_F21C1034B58C5050_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x7AEBEA0)
#define CLASS_3_F21C1034B58C5050_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7AEC0A0)
#define CLASS_3_F21C1034B58C5050_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x7AEC100)
#define CLASS_3_F21C1034B58C5050_METHOD_3_E9B1D65E33CF38C2_OFFSET UNITYSDK_OFFSET(0x7AEBFB0)
#define CLASS_3_F21C1034B58C5050_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x7AEBE10)
#define CLASS_3_F21C1034B58C5050__CCTOR_OFFSET UNITYSDK_OFFSET(0x7AEBF00)
#define CLASS_3_F21C1034B58C5050__CTOR_OFFSET UNITYSDK_OFFSET(0x7AEBF80)

inline static constexpr unsigned int Class_3_F21C1034B58C5050_TypeDefinitionIndex = 78952;

class Class_3_F21C1034B58C5050 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_10 = 0x43; // 0x0
	::Class_2_208CC9941471731A_240* Field_3_3; // 0x48
	::MoleMole::Config::ItemDropEffectSetting* Field_3_5; // 0x50
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_3_0; // 0x58
	::System::Int32 Field_3_1; // 0x60
	::System::Int32 Field_3_2; // 0x64
	::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_7> Field_3_4; // 0x68
	::UnityEngine::Bounds Field_3_9; // 0x74
	::Enum_3_337A0D7142819EB2 Field_3_6; // 0x8C
	::System::Boolean Field_3_8; // 0x90
	::System::Boolean Field_3_7; // 0x91

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_E9B1D65E33CF38C2(::System::Int32 a1, ::System::Int32 a2, ::Enum_3_337A0D7142819EB2 a3, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_7> a4, ::Class_2_208CC9941471731A_240* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_337A0D7142819EB2, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C_7>, ::Class_2_208CC9941471731A_240*))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_METHOD_3_E9B1D65E33CF38C2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_F21C1034B58C5050* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_F21C1034B58C5050*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F21C1034B58C5050_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
