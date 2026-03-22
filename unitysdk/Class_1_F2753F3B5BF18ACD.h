#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_3.h"
#include "unitysdk/Struct_2_8288F5C27D74AFA9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_232;
class Class_1_4C71EF04B2D31519;
class Class_1_A3AC0B6B344CF5CC;
namespace Code::Logic::Data::ScriptObject::Level { class Member; }

#define CLASS_1_F2753F3B5BF18ACD_METHOD_1_1FF59A52EE8D2650_OFFSET UNITYSDK_OFFSET(0x62FB400)
#define CLASS_1_F2753F3B5BF18ACD_METHOD_1_2EC3550BEFF144A1_OFFSET UNITYSDK_OFFSET(0x62FB970)
#define CLASS_1_F2753F3B5BF18ACD_METHOD_1_3511A28C85177DDF_OFFSET UNITYSDK_OFFSET(0x62FB5A0)
#define CLASS_1_F2753F3B5BF18ACD_METHOD_1_7CBC6699BC67CE6E_OFFSET UNITYSDK_OFFSET(0x62FB4C0)
#define CLASS_1_F2753F3B5BF18ACD_METHOD_1_CD96C1430E68086B_OFFSET UNITYSDK_OFFSET(0x62FB8E0)
#define CLASS_1_F2753F3B5BF18ACD__CTOR_OFFSET UNITYSDK_OFFSET(0x62FB3C0)

inline static constexpr unsigned int Class_1_F2753F3B5BF18ACD_TypeDefinitionIndex = 46543;

class Class_1_F2753F3B5BF18ACD : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_232* Field_1_3; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Single Field_1_1; // 0x20
	::System::UInt32 Field_1_4; // 0x24

	::System::Void _ctor(::Code::Logic::Data::ScriptObject::Level::Member* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Member*))((::PBYTE)hIl2Cpp + CLASS_1_F2753F3B5BF18ACD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_1FF59A52EE8D2650(::Class_1_4C71EF04B2D31519* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C71EF04B2D31519*))((::PBYTE)hIl2Cpp + CLASS_1_F2753F3B5BF18ACD_METHOD_1_1FF59A52EE8D2650_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CBC6699BC67CE6E(::Class_1_4C71EF04B2D31519* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C71EF04B2D31519*))((::PBYTE)hIl2Cpp + CLASS_1_F2753F3B5BF18ACD_METHOD_1_7CBC6699BC67CE6E_OFFSET))(this, a1);
	}

	::System::Void Method_1_3511A28C85177DDF(::Struct_2_8288F5C27D74AFA9& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_8288F5C27D74AFA9&))((::PBYTE)hIl2Cpp + CLASS_1_F2753F3B5BF18ACD_METHOD_1_3511A28C85177DDF_OFFSET))(this, a1);
	}

	::Struct_2_4C8453486C91E3A1_3 Method_1_CD96C1430E68086B(::System::Int32 a1)
	{
		return ((::Struct_2_4C8453486C91E3A1_3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2753F3B5BF18ACD_METHOD_1_CD96C1430E68086B_OFFSET))(this, a1);
	}

	::System::Void Method_1_2EC3550BEFF144A1(::Class_1_4C71EF04B2D31519* a1, ::Class_1_A3AC0B6B344CF5CC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4C71EF04B2D31519*, ::Class_1_A3AC0B6B344CF5CC*))((::PBYTE)hIl2Cpp + CLASS_1_F2753F3B5BF18ACD_METHOD_1_2EC3550BEFF144A1_OFFSET))(this, a1, a2);
	}
};
