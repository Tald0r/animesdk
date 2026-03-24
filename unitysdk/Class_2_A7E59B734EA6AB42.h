#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_58D6E6CBE8DF407A.h"
#include "unitysdk/Enum_3_D97372C4EB93BA22.h"
#include "unitysdk/Enum_3_DC8558A9D4014341.h"
#include "unitysdk/Struct_2_48460350BA079E78.h"
#include "unitysdk/Struct_2_5FCE2F86D710DAC0.h"
#include "unitysdk/Struct_2_A8AA65B75807FFC4.h"

class Class_1_BE9DBA7141CD3561;
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }

#define CLASS_2_A7E59B734EA6AB42_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xAC90760)
#define CLASS_2_A7E59B734EA6AB42_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xAC90600)
#define CLASS_2_A7E59B734EA6AB42_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xAC90750)
#define CLASS_2_A7E59B734EA6AB42_METHOD_2_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0xAC90670)
#define CLASS_2_A7E59B734EA6AB42_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xAC90660)
#define CLASS_2_A7E59B734EA6AB42_METHOD_2_A4FBBA3EA6576936_OFFSET UNITYSDK_OFFSET(0xAC90020)
#define CLASS_2_A7E59B734EA6AB42_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xAC8FFD0)
#define CLASS_2_A7E59B734EA6AB42_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAC906F0)
#define CLASS_2_A7E59B734EA6AB42__CTOR_OFFSET UNITYSDK_OFFSET(0xAC8FFE0)

inline static constexpr unsigned int Class_2_A7E59B734EA6AB42_TypeDefinitionIndex = 80712;

class Class_2_A7E59B734EA6AB42 : public ::Class_1_58D6E6CBE8DF407A
{
public:
	::System::String* Field_2_1; // 0x28
	::Struct_2_5FCE2F86D710DAC0 Field_2_0; // 0x30
	::UnityEngine::Renderer* Field_2_7; // 0x48
	::Struct_2_A8AA65B75807FFC4 Field_2_6; // 0x50
	::Struct_2_48460350BA079E78 Field_2_11; // 0x78
	::System::String* Field_2_2; // 0x88
	::UnityEngine::Collider* Field_2_8; // 0x90
	::Class_1_BE9DBA7141CD3561* Field_2_5; // 0x98
	::System::Single Field_2_13; // 0xA0
	::System::Int32 Field_2_10; // 0xA4
	::System::Single Field_2_3; // 0xA8
	::Enum_3_DC8558A9D4014341 Field_2_9; // 0xAC
	::System::Single Field_2_4; // 0xB0
	::System::Boolean Field_2_12; // 0xB4

	::System::Void _ctor(::Struct_2_A8AA65B75807FFC4 a1, ::System::String* a2, ::System::String* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_A8AA65B75807FFC4, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A7E59B734EA6AB42__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Enum_3_D97372C4EB93BA22 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D97372C4EB93BA22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E59B734EA6AB42_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_2_A4FBBA3EA6576936()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E59B734EA6AB42_METHOD_2_A4FBBA3EA6576936_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E59B734EA6AB42_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_BE9DBA7141CD3561* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE9DBA7141CD3561*))((::PBYTE)hIl2Cpp + CLASS_2_A7E59B734EA6AB42_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_775B6D644F07B554()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E59B734EA6AB42_METHOD_2_775B6D644F07B554_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E59B734EA6AB42_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E59B734EA6AB42_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::Class_1_BE9DBA7141CD3561* Method_2_24748FC20F375725()
	{
		return ((::Class_1_BE9DBA7141CD3561*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7E59B734EA6AB42_METHOD_2_24748FC20F375725_OFFSET))(this);
	}
};
