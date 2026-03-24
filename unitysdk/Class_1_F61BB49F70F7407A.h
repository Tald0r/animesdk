#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_28FD69F98B9C81E2.h"
#include "unitysdk/Enum_3_70DCAC76E792CECD.h"
#include "unitysdk/Enum_3_C460945F1F3C12F5.h"
#include "unitysdk/Struct_2_BBA9BFFCB5AD7C3C.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F61BB49F70F7407A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0BC420)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_0901A93980379391_OFFSET UNITYSDK_OFFSET(0xA0BCEF0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA0BE050)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_295387C658F01BF9_OFFSET UNITYSDK_OFFSET(0xA0BCDF0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_3B025D78E5BFB542_OFFSET UNITYSDK_OFFSET(0xA0BD9B0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0xA0BDA90)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_42B0AF1C8D7D5E91_OFFSET UNITYSDK_OFFSET(0xA0BC970)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_4ACDCEE2AD61119F_1_OFFSET UNITYSDK_OFFSET(0xA0BD5F0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_4ACDCEE2AD61119F_OFFSET UNITYSDK_OFFSET(0xA0BD3A0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xA0BC940)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0xA0BC960)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0xA0BC930)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xA0BC950)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_6CFFA5CFCD27D454_OFFSET UNITYSDK_OFFSET(0xA0BD010)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_79C5B6E8AE253CAD_OFFSET UNITYSDK_OFFSET(0xA0BDD40)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_870E8D2B59CD8D9D_OFFSET UNITYSDK_OFFSET(0xA0BDC50)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_93ADD9DB2F376466_OFFSET UNITYSDK_OFFSET(0xA0BD7B0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0xA0BD1F0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_A96DCA30C6927810_1_OFFSET UNITYSDK_OFFSET(0xA0BE100)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xA0BCEE0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0xA0BE090)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0xA0BDEC0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_B4164A611279BA91_OFFSET UNITYSDK_OFFSET(0xA0BCD10)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_B474CE978CEF5977_1_OFFSET UNITYSDK_OFFSET(0xA0BD140)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_B474CE978CEF5977_OFFSET UNITYSDK_OFFSET(0xA0BCF60)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0xA0BCED0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET UNITYSDK_OFFSET(0xA0BDAB0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_2_OFFSET UNITYSDK_OFFSET(0xA0BDB80)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_3_OFFSET UNITYSDK_OFFSET(0xA0BDDF0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xA0BD6E0)
#define CLASS_1_F61BB49F70F7407A_METHOD_1_E8F70BB16F7A6774_OFFSET UNITYSDK_OFFSET(0xA0BD490)
#define CLASS_1_F61BB49F70F7407A_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0BC500)
#define CLASS_1_F61BB49F70F7407A__CTOR_OFFSET UNITYSDK_OFFSET(0xA0BC410)

inline static constexpr unsigned int Class_1_F61BB49F70F7407A_TypeDefinitionIndex = 65732;

class Class_1_F61BB49F70F7407A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_10; // 0x0
	::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* Field_1_4; // 0x10
	::System::Collections::Generic::IEnumerable_1<::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*>* Field_1_7; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_1; // 0x28
	::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* Field_1_3; // 0x30
	::System::String* Field_1_0; // 0x38
	::MoleMole::Battle::Entity* Field_1_9; // 0x40
	::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* Field_1_6; // 0x48
	::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>* Field_1_5; // 0x50
	::Struct_2_BBA9BFFCB5AD7C3C Field_1_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_TOSTRING_OFFSET))(this);
	}

	::System::Single Method_1_42B0AF1C8D7D5E91(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_42B0AF1C8D7D5E91_OFFSET))(this, a1);
	}

	::Class_1_F61BB49F70F7407A* Method_1_B4164A611279BA91(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_F61BB49F70F7407A*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_B4164A611279BA91_OFFSET))(this, a1, a2);
	}

	::Class_1_F61BB49F70F7407A* Method_1_295387C658F01BF9(::System::Single a1, ::Enum_3_28FD69F98B9C81E2 a2, ::Enum_3_70DCAC76E792CECD a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Class_1_F61BB49F70F7407A*(*)(::PVOID, ::System::Single, ::Enum_3_28FD69F98B9C81E2, ::Enum_3_70DCAC76E792CECD, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_295387C658F01BF9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_B9D8FD15D18938A0_OFFSET))(this);
	}

	::Enum_3_28FD69F98B9C81E2 Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_28FD69F98B9C81E2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_1_0901A93980379391(::Enum_3_C460945F1F3C12F5 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_C460945F1F3C12F5))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_0901A93980379391_OFFSET))(this, a1);
	}

	::System::Void Method_1_B474CE978CEF5977(::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_B474CE978CEF5977_OFFSET))(this, a1);
	}

	::System::Void Method_1_6CFFA5CFCD27D454(::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_6CFFA5CFCD27D454_OFFSET))(this, a1);
	}

	::System::Void Method_1_B474CE978CEF5977_1(::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_B474CE978CEF5977_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_1_4ACDCEE2AD61119F(::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_4ACDCEE2AD61119F_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_E8F70BB16F7A6774(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_E8F70BB16F7A6774_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4ACDCEE2AD61119F_1(::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_4ACDCEE2AD61119F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	static ::Class_1_F61BB49F70F7407A* Method_1_93ADD9DB2F376466(::System::String* a1, ::System::String* a2, ::System::Single a3, ::Enum_3_28FD69F98B9C81E2 a4, ::Enum_3_70DCAC76E792CECD a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::Class_1_F61BB49F70F7407A*(*)(::System::String*, ::System::String*, ::System::Single, ::Enum_3_28FD69F98B9C81E2, ::Enum_3_70DCAC76E792CECD, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_93ADD9DB2F376466_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_3B025D78E5BFB542(::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::Class_1_F61BB49F70F7407A*, ::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_3B025D78E5BFB542_OFFSET))(this, a1);
	}

	::Struct_2_BBA9BFFCB5AD7C3C Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_BBA9BFFCB5AD7C3C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_870E8D2B59CD8D9D(::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_870E8D2B59CD8D9D_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_79C5B6E8AE253CAD(::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_F61BB49F70F7407A*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_79C5B6E8AE253CAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_CA6BDDCC5F7CE11E_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::Enum_3_70DCAC76E792CECD Method_1_A96DCA30C6927810_1()
	{
		return ((::Enum_3_70DCAC76E792CECD(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F61BB49F70F7407A_METHOD_1_A96DCA30C6927810_1_OFFSET))(this);
	}
};
