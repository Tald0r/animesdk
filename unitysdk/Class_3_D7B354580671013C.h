#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E1E8F78EF830D7DA.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_6E23A591AC26A31E.h"
#include "unitysdk/Struct_2_9FD26085F85DA330.h"
#include "unitysdk/Struct_2_D235A7D760E7915C.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DG::Tweening { class Tween; }
namespace MoleMole::Config { class ConfigHollowChessboardScreenUI; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2, typename T3> class Class_3_D7B354580671013C_Class_3_4E18D6856950D32F;

#define CLASS_3_D7B354580671013C_METHOD_3_04DCD6DC798AC77D_OFFSET UNITYSDK_OFFSET(0x6922850)
#define CLASS_3_D7B354580671013C_METHOD_3_151CE86D0DDC42AA_OFFSET UNITYSDK_OFFSET(0x69227B0)
#define CLASS_3_D7B354580671013C_METHOD_3_16BDE42E5EA95C8B_OFFSET UNITYSDK_OFFSET(0x6924160)
#define CLASS_3_D7B354580671013C_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x69218B0)
#define CLASS_3_D7B354580671013C_METHOD_3_52FA7498E9DEA350_OFFSET UNITYSDK_OFFSET(0x6923C30)
#define CLASS_3_D7B354580671013C_METHOD_3_53954C365B8B90FF_1_OFFSET UNITYSDK_OFFSET(0x6923500)
#define CLASS_3_D7B354580671013C_METHOD_3_53954C365B8B90FF_OFFSET UNITYSDK_OFFSET(0x6923070)
#define CLASS_3_D7B354580671013C_METHOD_3_5855525A2684D673_OFFSET UNITYSDK_OFFSET(0x6924420)
#define CLASS_3_D7B354580671013C_METHOD_3_79427E7C1C5DFA99_OFFSET UNITYSDK_OFFSET(0x69219A0)
#define CLASS_3_D7B354580671013C_METHOD_3_7C3A566172A4D9FD_1_OFFSET UNITYSDK_OFFSET(0x6923610)
#define CLASS_3_D7B354580671013C_METHOD_3_7C3A566172A4D9FD_2_OFFSET UNITYSDK_OFFSET(0x6924A50)
#define CLASS_3_D7B354580671013C_METHOD_3_7C3A566172A4D9FD_OFFSET UNITYSDK_OFFSET(0x69232A0)
#define CLASS_3_D7B354580671013C_METHOD_3_8BCCABDF1AFFA0D9_1_OFFSET UNITYSDK_OFFSET(0x6924CB0)
#define CLASS_3_D7B354580671013C_METHOD_3_8BCCABDF1AFFA0D9_OFFSET UNITYSDK_OFFSET(0x6923180)
#define CLASS_3_D7B354580671013C_METHOD_3_9BB60DB047D1EF98_OFFSET UNITYSDK_OFFSET(0x6921A40)
#define CLASS_3_D7B354580671013C_METHOD_3_9F94C340EDA71D18_OFFSET UNITYSDK_OFFSET(0x6921B30)
#define CLASS_3_D7B354580671013C_METHOD_3_C80C2EB104A58448_1_OFFSET UNITYSDK_OFFSET(0x6924040)
#define CLASS_3_D7B354580671013C_METHOD_3_C80C2EB104A58448_2_OFFSET UNITYSDK_OFFSET(0x6922F60)
#define CLASS_3_D7B354580671013C_METHOD_3_C80C2EB104A58448_OFFSET UNITYSDK_OFFSET(0x69226A0)
#define CLASS_3_D7B354580671013C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x69243C0)
#define CLASS_3_D7B354580671013C_METHOD_3_FCE0F5FDC18C9799_OFFSET UNITYSDK_OFFSET(0x6923870)
#define CLASS_3_D7B354580671013C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6922440)
#define CLASS_3_D7B354580671013C__CTOR_OFFSET UNITYSDK_OFFSET(0x6921830)

inline static constexpr unsigned int Class_3_D7B354580671013C_TypeDefinitionIndex = 42719;

class Class_3_D7B354580671013C : public ::Class_2_E1E8F78EF830D7DA
{
public:
	static ::System::Collections::Generic::List_1<::Class_3_D7B354580671013C_Class_3_4E18D6856950D32F<::Struct_2_9FD26085F85DA330, ::UnityEngine::Vector4, ::UnityEngine::Vector4>*>** StaticGet_Field_3_0()
	{
		return (::System::Collections::Generic::List_1<::Class_3_D7B354580671013C_Class_3_4E18D6856950D32F<::Struct_2_9FD26085F85DA330, ::UnityEngine::Vector4, ::UnityEngine::Vector4>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D7B354580671013C_TypeDefinitionIndex)->GetStaticField(0x3B910);
	}
	::Struct_2_D235A7D760E7915C Field_3_5; // 0x28
	::System::String* Field_3_6; // 0x48
	::DG::Tweening::Tween* Field_3_11; // 0x50
	::Il2CppArray<::System::Char>* Field_3_10; // 0x58
	::System::Single Field_3_8; // 0x60
	::System::Int32 Field_3_1; // 0x64
	::System::Boolean Field_3_4; // 0x68
	::System::Int32 Field_3_2; // 0x6C
	::System::Int32 Field_3_3; // 0x70
	::System::Int32 Field_3_7; // 0x74
	::System::Single Field_3_12; // 0x78
	::System::Single Field_3_9; // 0x7C

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C__CCTOR_OFFSET))();
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_9BB60DB047D1EF98(::Struct_2_6E23A591AC26A31E& a1, ::System::Single a2, ::MoleMole::HollowChessboard::HollowCell a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_9BB60DB047D1EF98_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_79427E7C1C5DFA99(::DG::Tweening::Tween* a1)
	{
		return ((::System::Void(*)(::PVOID, ::DG::Tweening::Tween*))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_79427E7C1C5DFA99_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_C80C2EB104A58448()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_C80C2EB104A58448_OFFSET))();
	}

	::System::Void Method_3_04DCD6DC798AC77D(::Struct_2_D235A7D760E7915C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_D235A7D760E7915C))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_04DCD6DC798AC77D_OFFSET))(this, a1);
	}

	static ::System::Int32 Method_3_53954C365B8B90FF()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_53954C365B8B90FF_OFFSET))();
	}

	static ::System::String* Method_3_8BCCABDF1AFFA0D9()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_8BCCABDF1AFFA0D9_OFFSET))();
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_7C3A566172A4D9FD()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_7C3A566172A4D9FD_OFFSET))(this);
	}

	static ::System::Int32 Method_3_53954C365B8B90FF_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_53954C365B8B90FF_1_OFFSET))();
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_7C3A566172A4D9FD_1()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_7C3A566172A4D9FD_1_OFFSET))(this);
	}

	::System::Void Method_3_FCE0F5FDC18C9799(::System::Single a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_FCE0F5FDC18C9799_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_9F94C340EDA71D18(::Struct_2_6E23A591AC26A31E& a1, ::Struct_2_9FD26085F85DA330& a2, ::System::Single a3, ::MoleMole::HollowChessboard::HollowCell a4)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_6E23A591AC26A31E&, ::Struct_2_9FD26085F85DA330&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_9F94C340EDA71D18_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_3_52FA7498E9DEA350(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_52FA7498E9DEA350_OFFSET))(this, a1);
	}

	static ::System::String* Method_3_8BCCABDF1AFFA0D9_1()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_8BCCABDF1AFFA0D9_1_OFFSET))();
	}

	static ::MoleMole::Config::ConfigHollowChessboardScreenUI* Method_3_151CE86D0DDC42AA()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardScreenUI*(*)())((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_151CE86D0DDC42AA_OFFSET))();
	}

	::System::Boolean Method_3_5855525A2684D673()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_5855525A2684D673_OFFSET))(this);
	}

	static ::System::Single Method_3_C80C2EB104A58448_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_C80C2EB104A58448_1_OFFSET))();
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* Method_3_7C3A566172A4D9FD_2()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_7C3A566172A4D9FD_2_OFFSET))(this);
	}

	static ::System::Single Method_3_C80C2EB104A58448_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_C80C2EB104A58448_2_OFFSET))();
	}

	::System::Single Method_3_16BDE42E5EA95C8B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D7B354580671013C_METHOD_3_16BDE42E5EA95C8B_OFFSET))(this);
	}
};
