#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B8EB3E9191ADE6A5.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_5_662CD71855ACCA84_METHOD_5_261D4B62BEE14763_OFFSET UNITYSDK_OFFSET(0x7122680)
#define CLASS_5_662CD71855ACCA84_METHOD_5_6EEC31C0D8C79060_OFFSET UNITYSDK_OFFSET(0x7121620)
#define CLASS_5_662CD71855ACCA84_METHOD_5_C87CF0419636E244_OFFSET UNITYSDK_OFFSET(0x71216B0)
#define CLASS_5_662CD71855ACCA84_METHOD_5_CBDC7453F3155151_OFFSET UNITYSDK_OFFSET(0x71212D0)
#define CLASS_5_662CD71855ACCA84_METHOD_5_E1FFA68B107A4A14_OFFSET UNITYSDK_OFFSET(0x7122690)
#define CLASS_5_662CD71855ACCA84__CTOR_OFFSET UNITYSDK_OFFSET(0x7121610)

inline static constexpr unsigned int Class_5_662CD71855ACCA84_TypeDefinitionIndex = 61717;

class Class_5_662CD71855ACCA84 : public ::Class_4_B8EB3E9191ADE6A5
{
public:
	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Field_5_1; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Field_5_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_CBDC7453F3155151(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_CBDC7453F3155151_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_5_6EEC31C0D8C79060()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_6EEC31C0D8C79060_OFFSET))(this);
	}

	::System::Void Method_5_261D4B62BEE14763(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_261D4B62BEE14763_OFFSET))(this, a1, a2);
	}

	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Method_5_C87CF0419636E244()
	{
		return ((::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_C87CF0419636E244_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Method_5_E1FFA68B107A4A14()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_E1FFA68B107A4A14_OFFSET))(this);
	}
};
