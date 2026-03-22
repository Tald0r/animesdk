#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B8EB3E9191ADE6A5.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_5_768A3918946D2F06_1_METHOD_5_261D4B62BEE14763_OFFSET UNITYSDK_OFFSET(0xA2DE770)
#define CLASS_5_768A3918946D2F06_1_METHOD_5_6EEC31C0D8C79060_OFFSET UNITYSDK_OFFSET(0xA2DE6E0)
#define CLASS_5_768A3918946D2F06_1_METHOD_5_92FDFCF4B7774F93_OFFSET UNITYSDK_OFFSET(0xA2DCC80)
#define CLASS_5_768A3918946D2F06_1_METHOD_5_C06A7E6E54A3B291_OFFSET UNITYSDK_OFFSET(0xA2DC860)
#define CLASS_5_768A3918946D2F06_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA2DCC70)

inline static constexpr unsigned int Class_5_768A3918946D2F06_1_TypeDefinitionIndex = 76612;

class Class_5_768A3918946D2F06_1 : public ::Class_4_B8EB3E9191ADE6A5
{
public:
	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Field_5_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_C06A7E6E54A3B291(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1_METHOD_5_C06A7E6E54A3B291_OFFSET))(this, a1, a2);
	}

	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Method_5_92FDFCF4B7774F93()
	{
		return ((::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1_METHOD_5_92FDFCF4B7774F93_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_5_6EEC31C0D8C79060()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1_METHOD_5_6EEC31C0D8C79060_OFFSET))(this);
	}

	::System::Void Method_5_261D4B62BEE14763(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1_METHOD_5_261D4B62BEE14763_OFFSET))(this, a1, a2);
	}
};
