#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B8EB3E9191ADE6A5.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_5_768A3918946D2F06_METHOD_5_261D4B62BEE14763_OFFSET UNITYSDK_OFFSET(0x8DA7F10)
#define CLASS_5_768A3918946D2F06_METHOD_5_3A010ADA0AD242BE_OFFSET UNITYSDK_OFFSET(0x8DA6980)
#define CLASS_5_768A3918946D2F06_METHOD_5_6EEC31C0D8C79060_OFFSET UNITYSDK_OFFSET(0x8DA7F20)
#define CLASS_5_768A3918946D2F06_METHOD_5_C06A7E6E54A3B291_OFFSET UNITYSDK_OFFSET(0x8DA6560)
#define CLASS_5_768A3918946D2F06__CTOR_OFFSET UNITYSDK_OFFSET(0x8DA6970)

inline static constexpr unsigned int Class_5_768A3918946D2F06_TypeDefinitionIndex = 53186;

class Class_5_768A3918946D2F06 : public ::Class_4_B8EB3E9191ADE6A5
{
public:
	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Field_5_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_C06A7E6E54A3B291(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_METHOD_5_C06A7E6E54A3B291_OFFSET))(this, a1, a2);
	}

	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Method_5_3A010ADA0AD242BE()
	{
		return ((::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_METHOD_5_3A010ADA0AD242BE_OFFSET))(this);
	}

	::System::Void Method_5_261D4B62BEE14763(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_METHOD_5_261D4B62BEE14763_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_5_6EEC31C0D8C79060()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_METHOD_5_6EEC31C0D8C79060_OFFSET))(this);
	}
};
