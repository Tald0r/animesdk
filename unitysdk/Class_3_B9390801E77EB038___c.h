#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_3_B9390801E77EB038___C_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0xA8C7270)
#define CLASS_3_B9390801E77EB038___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xA8C7230)
#define CLASS_3_B9390801E77EB038___C_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0xA8C72B0)
#define CLASS_3_B9390801E77EB038___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA8C71E0)
#define CLASS_3_B9390801E77EB038___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C7220)

inline static constexpr unsigned int Class_3_B9390801E77EB038___c_TypeDefinitionIndex = 39199;

class Class_3_B9390801E77EB038___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__2_5()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B9390801E77EB038___c_TypeDefinitionIndex)->GetStaticField(0x3C8A0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B9390801E77EB038___c_TypeDefinitionIndex)->GetStaticField(0x3C8A8);
	}
	static ::Class_3_B9390801E77EB038___c** StaticGet___9()
	{
		return (::Class_3_B9390801E77EB038___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B9390801E77EB038___c_TypeDefinitionIndex)->GetStaticField(0x3C8B0);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_4()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B9390801E77EB038___c_TypeDefinitionIndex)->GetStaticField(0x3C8B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038___C_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9390801E77EB038___C_METHOD_1_F24A112B56A2E4B4_OFFSET))(this);
	}
};
