#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6F795B6098BF80C.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"

class Class_1_11A58A840528E5B2;
class Class_1_2EF69FD7F867E7F6;
class Class_3_8FFB089E7CA1DDA6_1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_4_9ABC19824DCCAB88_METHOD_4_0136226C6C09D487_OFFSET UNITYSDK_OFFSET(0x775C5B0)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x775CFE0)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_73AA82CB5777FEC0_OFFSET UNITYSDK_OFFSET(0x775D420)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_A7915D196CF39423_OFFSET UNITYSDK_OFFSET(0x775CF30)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_D163BA23784A96A8_OFFSET UNITYSDK_OFFSET(0x775CC80)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_D5106BBEF6C34AD4_OFFSET UNITYSDK_OFFSET(0x775D380)
#define CLASS_4_9ABC19824DCCAB88_METHOD_4_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x775D5F0)
#define CLASS_4_9ABC19824DCCAB88__CTOR_OFFSET UNITYSDK_OFFSET(0x775C510)

inline static constexpr unsigned int Class_4_9ABC19824DCCAB88_TypeDefinitionIndex = 58984;

class Class_4_9ABC19824DCCAB88 : public ::Class_3_C6F795B6098BF80C<::Class_3_8FFB089E7CA1DDA6_1*>
{
public:
	::System::Void _ctor(::Class_1_11A58A840528E5B2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11A58A840528E5B2*))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_4_0136226C6C09D487(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_0136226C6C09D487_OFFSET))(this, a1);
	}

	::System::Void Method_4_D163BA23784A96A8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_D163BA23784A96A8_OFFSET))(this, a1);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_4_A7915D196CF39423(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_A7915D196CF39423_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_4_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_18982EFD3B740683_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTaskVoid Method_4_D5106BBEF6C34AD4(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_D5106BBEF6C34AD4_OFFSET))(a1, a2);
	}

	static ::MoleMole::Battle::Entity* Method_4_73AA82CB5777FEC0(::System::Int32 a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_73AA82CB5777FEC0_OFFSET))(a1);
	}

	::System::Void Method_4_E9A575D18A0748D9(::Class_1_2EF69FD7F867E7F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2EF69FD7F867E7F6*))((::PBYTE)hIl2Cpp + CLASS_4_9ABC19824DCCAB88_METHOD_4_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
