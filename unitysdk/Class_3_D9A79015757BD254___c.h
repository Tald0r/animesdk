#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0A48FD9019F00EFA;
class Class_3_6124F7AF16B30AB1;
class Class_3_90AB80EAF453E31E;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_D9A79015757BD254___C_METHOD_1_6F536CC421CAAC45_OFFSET UNITYSDK_OFFSET(0xE29D620)
#define CLASS_3_D9A79015757BD254___C_METHOD_1_F757326E40C0738F_OFFSET UNITYSDK_OFFSET(0xE29D630)
#define CLASS_3_D9A79015757BD254___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE29D5D0)
#define CLASS_3_D9A79015757BD254___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE29D610)

inline static constexpr unsigned int Class_3_D9A79015757BD254___c_TypeDefinitionIndex = 66940;

class Class_3_D9A79015757BD254___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_6124F7AF16B30AB1*, ::Class_3_0A48FD9019F00EFA*>** StaticGet___9__3_1()
	{
		return (::System::Action_2<::Class_3_6124F7AF16B30AB1*, ::Class_3_0A48FD9019F00EFA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D9A79015757BD254___c_TypeDefinitionIndex)->GetStaticField(0x33B80);
	}
	static ::Class_3_D9A79015757BD254___c** StaticGet___9()
	{
		return (::Class_3_D9A79015757BD254___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D9A79015757BD254___c_TypeDefinitionIndex)->GetStaticField(0x33B88);
	}
	static ::System::Action_1<::Class_3_90AB80EAF453E31E*>** StaticGet___9__3_0()
	{
		return (::System::Action_1<::Class_3_90AB80EAF453E31E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D9A79015757BD254___c_TypeDefinitionIndex)->GetStaticField(0x33B90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D9A79015757BD254___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9A79015757BD254___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F536CC421CAAC45(::Class_3_90AB80EAF453E31E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_90AB80EAF453E31E*))((::PBYTE)hIl2Cpp + CLASS_3_D9A79015757BD254___C_METHOD_1_6F536CC421CAAC45_OFFSET))(this, a1);
	}

	::System::Void Method_1_F757326E40C0738F(::Class_3_6124F7AF16B30AB1* a1, ::Class_3_0A48FD9019F00EFA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6124F7AF16B30AB1*, ::Class_3_0A48FD9019F00EFA*))((::PBYTE)hIl2Cpp + CLASS_3_D9A79015757BD254___C_METHOD_1_F757326E40C0738F_OFFSET))(this, a1, a2);
	}
};
