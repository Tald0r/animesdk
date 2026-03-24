#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B2691B89FDE6F433___C_METHOD_1_5A4916DD8A9945E4_1_OFFSET UNITYSDK_OFFSET(0x65A3190)
#define CLASS_1_B2691B89FDE6F433___C_METHOD_1_5A4916DD8A9945E4_OFFSET UNITYSDK_OFFSET(0x65A3170)
#define CLASS_1_B2691B89FDE6F433___C_METHOD_1_6C8041D3FAFAF2EA_OFFSET UNITYSDK_OFFSET(0x65A31B0)
#define CLASS_1_B2691B89FDE6F433___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x65A3120)
#define CLASS_1_B2691B89FDE6F433___C__CTOR_OFFSET UNITYSDK_OFFSET(0x65A3160)

inline static constexpr unsigned int Class_1_B2691B89FDE6F433___c_TypeDefinitionIndex = 45817;

class Class_1_B2691B89FDE6F433___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>** StaticGet___9__85_0()
	{
		return (::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2691B89FDE6F433___c_TypeDefinitionIndex)->GetStaticField(0x2CC70);
	}
	static ::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>** StaticGet___9__85_1()
	{
		return (::System::Func_2<::MoleMole::DownloadFileInfo*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2691B89FDE6F433___c_TypeDefinitionIndex)->GetStaticField(0x2CC78);
	}
	static ::Class_1_B2691B89FDE6F433___c** StaticGet___9()
	{
		return (::Class_1_B2691B89FDE6F433___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2691B89FDE6F433___c_TypeDefinitionIndex)->GetStaticField(0x2CC80);
	}
	static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__130_0()
	{
		return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2691B89FDE6F433___c_TypeDefinitionIndex)->GetStaticField(0x2CC88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2691B89FDE6F433___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2691B89FDE6F433___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_5A4916DD8A9945E4(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B2691B89FDE6F433___C_METHOD_1_5A4916DD8A9945E4_OFFSET))(this, a1);
	}

	::System::String* Method_1_5A4916DD8A9945E4_1(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_B2691B89FDE6F433___C_METHOD_1_5A4916DD8A9945E4_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6C8041D3FAFAF2EA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2691B89FDE6F433___C_METHOD_1_6C8041D3FAFAF2EA_OFFSET))(this, a1);
	}
};
