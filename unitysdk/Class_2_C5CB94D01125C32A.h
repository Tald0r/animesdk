#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIUrbanMapLeftTastListRow01RoleContext; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_C5CB94D01125C32A_METHOD_2_0D9C76C4B2D944F5_OFFSET UNITYSDK_OFFSET(0x9682170)
#define CLASS_2_C5CB94D01125C32A_METHOD_2_83DA3EC57FF907F4_1_OFFSET UNITYSDK_OFFSET(0x9682720)
#define CLASS_2_C5CB94D01125C32A_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x9682640)
#define CLASS_2_C5CB94D01125C32A_METHOD_2_A1D08E30669327DB_OFFSET UNITYSDK_OFFSET(0x9682590)
#define CLASS_2_C5CB94D01125C32A_METHOD_2_C256555AC376B91E_OFFSET UNITYSDK_OFFSET(0x9682500)
#define CLASS_2_C5CB94D01125C32A__CTOR_OFFSET UNITYSDK_OFFSET(0x96824B0)

inline static constexpr unsigned int Class_2_C5CB94D01125C32A_TypeDefinitionIndex = 55149;

class Class_2_C5CB94D01125C32A : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIUrbanMapLeftTastListRow01RoleContext*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0D9C76C4B2D944F5(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_0D9C76C4B2D944F5_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetPath Method_2_C256555AC376B91E()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_C256555AC376B91E_OFFSET))(this);
	}

	::System::Void Method_2_A1D08E30669327DB(::MoleMole::UIUrbanMapLeftTastListRow01RoleContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapLeftTastListRow01RoleContext*))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_A1D08E30669327DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5CB94D01125C32A_METHOD_2_83DA3EC57FF907F4_1_OFFSET))(this);
	}
};
