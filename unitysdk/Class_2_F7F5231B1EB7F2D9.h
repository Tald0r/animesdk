#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class Class_0_16E4307DCC419505_144;
class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F7F5231B1EB7F2D9_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x615B7F0)
#define CLASS_2_F7F5231B1EB7F2D9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x615B4E0)
#define CLASS_2_F7F5231B1EB7F2D9_FROMFLX_OFFSET UNITYSDK_OFFSET(0x615B110)
#define CLASS_2_F7F5231B1EB7F2D9_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x615BBB0)
#define CLASS_2_F7F5231B1EB7F2D9_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x615AC10)
#define CLASS_2_F7F5231B1EB7F2D9_METHOD_2_35DC431136EB061A_OFFSET UNITYSDK_OFFSET(0x615AE40)
#define CLASS_2_F7F5231B1EB7F2D9_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x615B190)
#define CLASS_2_F7F5231B1EB7F2D9_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x615AD10)
#define CLASS_2_F7F5231B1EB7F2D9_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x615BD60)
#define CLASS_2_F7F5231B1EB7F2D9_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x615BA50)
#define CLASS_2_F7F5231B1EB7F2D9_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x615ABC0)
#define CLASS_2_F7F5231B1EB7F2D9_METHOD_2_E0AC97338167133E_OFFSET UNITYSDK_OFFSET(0x615B540)
#define CLASS_2_F7F5231B1EB7F2D9_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x615B860)
#define CLASS_2_F7F5231B1EB7F2D9__CTOR_OFFSET UNITYSDK_OFFSET(0x615BA40)

inline static constexpr unsigned int Class_2_F7F5231B1EB7F2D9_TypeDefinitionIndex = 74335;

class Class_2_F7F5231B1EB7F2D9 : public ::MoleMole::Config::ConfigViewObjectTraitBase
{
public:
	::System::String* Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
	{
		return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Void Method_2_35DC431136EB061A(::Class_0_16E4307DCC419505_144* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_METHOD_2_35DC431136EB061A_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_BUILDENTITYCOMPONENT_OFFSET))(this, a1);
	}

	::System::Void PostProcessEntity(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_POSTPROCESSENTITY_OFFSET))(this, a1);
	}

	static ::Class_2_F7F5231B1EB7F2D9* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_F7F5231B1EB7F2D9*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_F7F5231B1EB7F2D9* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_F7F5231B1EB7F2D9*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_E0AC97338167133E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_METHOD_2_E0AC97338167133E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_144* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_144*))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_F7F5231B1EB7F2D9_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}
};
