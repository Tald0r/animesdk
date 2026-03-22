#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/Struct_2_7548B21900B2290B.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_4233FE9DB8C2873E_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x70FE820)
#define CLASS_2_4233FE9DB8C2873E_FROMFLX_OFFSET UNITYSDK_OFFSET(0x70FDE40)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x70FEC70)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x70FDEC0)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x70FDB70)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_82F37E818D9FE609_OFFSET UNITYSDK_OFFSET(0x70FE880)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x70FDD10)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x70FD740)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x70FEE20)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x70FEE80)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x70FDC10)
#define CLASS_2_4233FE9DB8C2873E__CTOR_OFFSET UNITYSDK_OFFSET(0x70FEC00)

inline static constexpr unsigned int Class_2_4233FE9DB8C2873E_TypeDefinitionIndex = 56846;

class Class_2_4233FE9DB8C2873E : public ::Class_1_8088D8743C1058EF
{
public:
	::Struct_2_7548B21900B2290B<::System::Single> Field_2_2; // 0x30
	::Class_1_ED5EE319EA265EB6* Field_2_0; // 0x50
	::System::String* Field_2_4; // 0x58
	::Struct_2_7548B21900B2290B<::System::Single> Field_2_1; // 0x60
	::MoleMole::Config::PropertyModifyFunction Field_2_5; // 0x80
	::MoleMole::Config::BaseProperty Field_2_3; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_BF5E2DCAE0BF038A_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_82F37E818D9FE609(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_82F37E818D9FE609_OFFSET))(this, a1, a2);
	}

	static ::Class_2_4233FE9DB8C2873E* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_4233FE9DB8C2873E*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_2_4233FE9DB8C2873E* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_4233FE9DB8C2873E*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
