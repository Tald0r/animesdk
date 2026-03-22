#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
class Class_1_F157DD73C7C08100;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_B2FBF3EE3D8AE333_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xAC82920)
#define CLASS_2_B2FBF3EE3D8AE333_FROMFLX_OFFSET UNITYSDK_OFFSET(0xAC82090)
#define CLASS_2_B2FBF3EE3D8AE333_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xAC82F70)
#define CLASS_2_B2FBF3EE3D8AE333_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0xAC82110)
#define CLASS_2_B2FBF3EE3D8AE333_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xAC81F60)
#define CLASS_2_B2FBF3EE3D8AE333_METHOD_2_BB2928BEC244DEB7_OFFSET UNITYSDK_OFFSET(0xAC81760)
#define CLASS_2_B2FBF3EE3D8AE333_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0xAC81DA0)
#define CLASS_2_B2FBF3EE3D8AE333_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC82DB0)
#define CLASS_2_B2FBF3EE3D8AE333_METHOD_2_D13DCD680ACD4877_OFFSET UNITYSDK_OFFSET(0xAC82980)
#define CLASS_2_B2FBF3EE3D8AE333_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xAC82E10)
#define CLASS_2_B2FBF3EE3D8AE333_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xAC81E60)
#define CLASS_2_B2FBF3EE3D8AE333__CTOR_OFFSET UNITYSDK_OFFSET(0xAC82D50)

inline static constexpr unsigned int Class_2_B2FBF3EE3D8AE333_TypeDefinitionIndex = 46498;

class Class_2_B2FBF3EE3D8AE333 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_0; // 0x30
	::System::String* Field_2_3; // 0x38
	::Class_1_F157DD73C7C08100* Field_2_1; // 0x40
	::System::Boolean Field_2_4; // 0x48
	::MoleMole::Config::BaseProperty Field_2_2; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BB2928BEC244DEB7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_METHOD_2_BB2928BEC244DEB7_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_D13DCD680ACD4877(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_METHOD_2_D13DCD680ACD4877_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_2_B2FBF3EE3D8AE333* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_B2FBF3EE3D8AE333*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_B2FBF3EE3D8AE333* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_B2FBF3EE3D8AE333*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B2FBF3EE3D8AE333_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
