#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_683526F6289DAE8A;
class Class_3_6DD073160AE2F68F;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_150F5BBE8811E7C4___C_METHOD_1_9F7E7FF8FCBABCF4_OFFSET UNITYSDK_OFFSET(0xBBA7370)
#define CLASS_3_150F5BBE8811E7C4___C_METHOD_1_B1876BF0F6862E68_OFFSET UNITYSDK_OFFSET(0xBBA74B0)
#define CLASS_3_150F5BBE8811E7C4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBA7320)
#define CLASS_3_150F5BBE8811E7C4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBA7360)

inline static constexpr unsigned int Class_3_150F5BBE8811E7C4___c_TypeDefinitionIndex = 78813;

class Class_3_150F5BBE8811E7C4___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_6DD073160AE2F68F*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_6DD073160AE2F68F*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_150F5BBE8811E7C4___c_TypeDefinitionIndex)->GetStaticField(0x2B1B0);
	}
	static ::System::Action_2<::Class_3_6DD073160AE2F68F*, ::Class_3_683526F6289DAE8A*>** StaticGet___9__4_1()
	{
		return (::System::Action_2<::Class_3_6DD073160AE2F68F*, ::Class_3_683526F6289DAE8A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_150F5BBE8811E7C4___c_TypeDefinitionIndex)->GetStaticField(0x2B1B8);
	}
	static ::Class_3_150F5BBE8811E7C4___c** StaticGet___9()
	{
		return (::Class_3_150F5BBE8811E7C4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_150F5BBE8811E7C4___c_TypeDefinitionIndex)->GetStaticField(0x2B1C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9F7E7FF8FCBABCF4(::Class_3_6DD073160AE2F68F* a1, ::Class_3_683526F6289DAE8A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6DD073160AE2F68F*, ::Class_3_683526F6289DAE8A*))((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4___C_METHOD_1_9F7E7FF8FCBABCF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1876BF0F6862E68(::Class_3_6DD073160AE2F68F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6DD073160AE2F68F*))((::PBYTE)hIl2Cpp + CLASS_3_150F5BBE8811E7C4___C_METHOD_1_B1876BF0F6862E68_OFFSET))(this, a1);
	}
};
