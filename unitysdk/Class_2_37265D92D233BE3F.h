#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainCitySidebarContext; }
namespace System { class String; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_37265D92D233BE3F_METHOD_2_091C27844DE82B85_OFFSET UNITYSDK_OFFSET(0xD0A64E0)
#define CLASS_2_37265D92D233BE3F_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xD0A60B0)
#define CLASS_2_37265D92D233BE3F_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xD0A5C40)
#define CLASS_2_37265D92D233BE3F_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xD0A5EF0)
#define CLASS_2_37265D92D233BE3F_METHOD_2_84DC5632240FF80F_OFFSET UNITYSDK_OFFSET(0xD0A6210)
#define CLASS_2_37265D92D233BE3F_METHOD_2_9B0C43B0B6D3BA9B_OFFSET UNITYSDK_OFFSET(0xD0A5E70)
#define CLASS_2_37265D92D233BE3F_METHOD_2_9BBBF46A3388C54F_OFFSET UNITYSDK_OFFSET(0xD0A6370)
#define CLASS_2_37265D92D233BE3F_METHOD_2_CBAF7F43CE031FFD_OFFSET UNITYSDK_OFFSET(0xD0A5580)
#define CLASS_2_37265D92D233BE3F__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0A5C00)
#define CLASS_2_37265D92D233BE3F__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A5BB0)

inline static constexpr unsigned int Class_2_37265D92D233BE3F_TypeDefinitionIndex = 58870;

class Class_2_37265D92D233BE3F : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	static ::System::String** StaticGet_Field_2_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_37265D92D233BE3F_TypeDefinitionIndex)->GetStaticField(0x37B50);
	}
	// static const ::System::String* Field_2_3; // 0x0
	::Class_2_000597E145D7A42A<::MoleMole::UIMainCitySidebarContext*>* Field_2_0; // 0x50
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_2_1; // 0x58
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CBAF7F43CE031FFD(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_CBAF7F43CE031FFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Boolean Method_2_9B0C43B0B6D3BA9B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_9B0C43B0B6D3BA9B_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_84DC5632240FF80F(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_84DC5632240FF80F_OFFSET))(this, a1);
	}

	::System::Void Method_2_9BBBF46A3388C54F(::MoleMole::UIMainCitySidebarContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCitySidebarContext*))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_9BBBF46A3388C54F_OFFSET))(this, a1);
	}

	::MoleMole::UIControllerContextBase* Method_2_091C27844DE82B85()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37265D92D233BE3F_METHOD_2_091C27844DE82B85_OFFSET))(this);
	}
};
