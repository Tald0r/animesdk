#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4521B631ACA75155.h"
#include "unitysdk/Enum_3_7DC9161991A0EE77.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_FD5B8435FDFD3E63.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_3662FC1DFD6A3E67;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_6E9BD97E6FBA0394_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xC61EE30)
#define CLASS_3_6E9BD97E6FBA0394_FROMFLX_OFFSET UNITYSDK_OFFSET(0xC61F820)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xC620BA0)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_38B782D577BF317C_OFFSET UNITYSDK_OFFSET(0xC61F4E0)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0xC61F8A0)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xC620D50)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_9DF9004FDB15CA21_OFFSET UNITYSDK_OFFSET(0xC620B90)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xC61F5F0)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xC61F6F0)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0xC620EB0)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_CFABC57D0E5BECCA_OFFSET UNITYSDK_OFFSET(0xC61EC80)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0xC61EB70)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_DCC1A04AAD39A4D8_OFFSET UNITYSDK_OFFSET(0xC61EE90)
#define CLASS_3_6E9BD97E6FBA0394_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC61EE20)
#define CLASS_3_6E9BD97E6FBA0394__CTOR_OFFSET UNITYSDK_OFFSET(0xC620B70)

inline static constexpr unsigned int Class_3_6E9BD97E6FBA0394_TypeDefinitionIndex = 44040;

class Class_3_6E9BD97E6FBA0394 : public ::Class_2_4521B631ACA75155
{
public:
	::Class_1_3662FC1DFD6A3E67* Field_3_10; // 0x38
	::MoleMole::Config::EffectAutoDynamicValue* Field_3_5; // 0x40
	::System::String* Field_3_0; // 0x48
	::System::String* Field_3_1; // 0x50
	::MoleMole::Config::ConfigPosRot* Field_3_3; // 0x58
	::System::String* Field_3_2; // 0x60
	::System::Boolean Field_3_6; // 0x68
	::System::Boolean Field_3_8; // 0x69
	::System::Boolean Field_3_9; // 0x6A
	::Enum_3_7DC9161991A0EE77 Field_3_7; // 0x6C
	::UnityEngine::Vector3 Field_3_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_CFABC57D0E5BECCA(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7, ::Struct_2_FD5B8435FDFD3E63& a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*, ::Struct_2_FD5B8435FDFD3E63&))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_CFABC57D0E5BECCA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_38B782D577BF317C(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_38B782D577BF317C_OFFSET))(this, a1);
	}

	::Class_2_4521B631ACA75155* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_4521B631ACA75155*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_DCC1A04AAD39A4D8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_DCC1A04AAD39A4D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9DF9004FDB15CA21(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7, ::Struct_2_FD5B8435FDFD3E63& a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*, ::Struct_2_FD5B8435FDFD3E63&))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_9DF9004FDB15CA21_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::Class_3_6E9BD97E6FBA0394* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_6E9BD97E6FBA0394*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_6E9BD97E6FBA0394* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_6E9BD97E6FBA0394*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_4521B631ACA75155* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_8CAD669444D1F6DE* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_4521B631ACA75155*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_6E9BD97E6FBA0394_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
