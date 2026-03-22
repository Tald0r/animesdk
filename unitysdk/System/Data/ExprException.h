#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Tokens.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { class OverflowException; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Data { class EvaluateException; }
namespace System::Data { class InvalidExpressionException; }
namespace System::Data { class OperatorInfo; }
namespace System::Data { class SyntaxErrorException; }

#define SYSTEM_DATA_EXPREXCEPTION_AGGREGATEARGUMENT_OFFSET UNITYSDK_OFFSET(0x1AADEB30)
#define SYSTEM_DATA_EXPREXCEPTION_AGGREGATEUNBOUND_OFFSET UNITYSDK_OFFSET(0x1AADEC10)
#define SYSTEM_DATA_EXPREXCEPTION_AMBIGUOUSBINOP_OFFSET UNITYSDK_OFFSET(0x1AADE350)
#define SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPEINTEGER_OFFSET UNITYSDK_OFFSET(0x1AADE070)
#define SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AADDF10)
#define SYSTEM_DATA_EXPREXCEPTION_BINDFAILURE_OFFSET UNITYSDK_OFFSET(0x1AADEA30)
#define SYSTEM_DATA_EXPREXCEPTION_COMPUTENOTAGGREGATE_OFFSET UNITYSDK_OFFSET(0x1AADEEF0)
#define SYSTEM_DATA_EXPREXCEPTION_DATATYPECONVERTION_OFFSET UNITYSDK_OFFSET(0x1AADD5B0)
#define SYSTEM_DATA_EXPREXCEPTION_DATAVALUECONVERTION_OFFSET UNITYSDK_OFFSET(0x1AADD720)
#define SYSTEM_DATA_EXPREXCEPTION_EVALNOCONTEXT_OFFSET UNITYSDK_OFFSET(0x1AADED10)
#define SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONTOOCOMPLEX_OFFSET UNITYSDK_OFFSET(0x1AADCC10)
#define SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONUNBOUND_OFFSET UNITYSDK_OFFSET(0x1AADEDF0)
#define SYSTEM_DATA_EXPREXCEPTION_FILTERCONVERTION_OFFSET UNITYSDK_OFFSET(0x1AADEFF0)
#define SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AADD0D0)
#define SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x1AADCB20)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDDATE_OFFSET UNITYSDK_OFFSET(0x1AADD990)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDHOURSARGUMENT_OFFSET UNITYSDK_OFFSET(0x1AADF2D0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDISSYNTAX_OFFSET UNITYSDK_OFFSET(0x1AADDE30)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDMINUTESARGUMENT_OFFSET UNITYSDK_OFFSET(0x1AADF3B0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDNAMEBRACKETING_OFFSET UNITYSDK_OFFSET(0x1AADE640)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDNAME_OFFSET UNITYSDK_OFFSET(0x1AADD890)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDPATTERN_OFFSET UNITYSDK_OFFSET(0x1AADDB70)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDSTRING_OFFSET UNITYSDK_OFFSET(0x1AADCDF0)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDTIMEZONERANGE_OFFSET UNITYSDK_OFFSET(0x1AADF490)
#define SYSTEM_DATA_EXPREXCEPTION_INVALIDTYPE_OFFSET UNITYSDK_OFFSET(0x1AADF1D0)
#define SYSTEM_DATA_EXPREXCEPTION_INVOKEARGUMENT_OFFSET UNITYSDK_OFFSET(0x1AADC640)
#define SYSTEM_DATA_EXPREXCEPTION_INWITHOUTLIST_OFFSET UNITYSDK_OFFSET(0x1AADDD50)
#define SYSTEM_DATA_EXPREXCEPTION_INWITHOUTPARENTHESES_OFFSET UNITYSDK_OFFSET(0x1AADDC70)
#define SYSTEM_DATA_EXPREXCEPTION_LOOKUPARGUMENT_OFFSET UNITYSDK_OFFSET(0x1AADF0F0)
#define SYSTEM_DATA_EXPREXCEPTION_MISMATCHKINDANDTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1AADF570)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERANDBEFORE_OFFSET UNITYSDK_OFFSET(0x1AADE740)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERAND_OFFSET UNITYSDK_OFFSET(0x1AADC7E0)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERATOR_OFFSET UNITYSDK_OFFSET(0x1AADC920)
#define SYSTEM_DATA_EXPREXCEPTION_MISSINGRIGHTPAREN_OFFSET UNITYSDK_OFFSET(0x1AADD1D0)
#define SYSTEM_DATA_EXPREXCEPTION_NONCONSTANTARGUMENT_OFFSET UNITYSDK_OFFSET(0x1AADDA90)
#define SYSTEM_DATA_EXPREXCEPTION_NYI_OFFSET UNITYSDK_OFFSET(0x1AADC6E0)
#define SYSTEM_DATA_EXPREXCEPTION_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x1AAD8490)
#define SYSTEM_DATA_EXPREXCEPTION_SYNTAXERROR_OFFSET UNITYSDK_OFFSET(0x1AADCFF0)
#define SYSTEM_DATA_EXPREXCEPTION_TOOMANYRIGHTPARENTHESES_OFFSET UNITYSDK_OFFSET(0x1AADE840)
#define SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCHINBINOP_OFFSET UNITYSDK_OFFSET(0x1AADE1A0)
#define SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCH_OFFSET UNITYSDK_OFFSET(0x1AADCA20)
#define SYSTEM_DATA_EXPREXCEPTION_UNBOUNDNAME_OFFSET UNITYSDK_OFFSET(0x1AADCCF0)
#define SYSTEM_DATA_EXPREXCEPTION_UNDEFINEDFUNCTION_OFFSET UNITYSDK_OFFSET(0x1AADCEF0)
#define SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_1_OFFSET UNITYSDK_OFFSET(0x1AADD3E0)
#define SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_OFFSET UNITYSDK_OFFSET(0x1AADD2B0)
#define SYSTEM_DATA_EXPREXCEPTION_UNRESOLVEDRELATION_OFFSET UNITYSDK_OFFSET(0x1AADE920)
#define SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDDATATYPE_OFFSET UNITYSDK_OFFSET(0x1AADF650)
#define SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDOPERATOR_OFFSET UNITYSDK_OFFSET(0x1AADE500)
#define SYSTEM_DATA_EXPREXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AADC330)
#define SYSTEM_DATA_EXPREXCEPTION__EVAL_1_OFFSET UNITYSDK_OFFSET(0x1AADC5A0)
#define SYSTEM_DATA_EXPREXCEPTION__EVAL_OFFSET UNITYSDK_OFFSET(0x1AADC500)
#define SYSTEM_DATA_EXPREXCEPTION__EXPR_OFFSET UNITYSDK_OFFSET(0x1AADC3C0)
#define SYSTEM_DATA_EXPREXCEPTION__OVERFLOW_OFFSET UNITYSDK_OFFSET(0x1AADC340)
#define SYSTEM_DATA_EXPREXCEPTION__SYNTAX_OFFSET UNITYSDK_OFFSET(0x1AADC460)

namespace System::Data
{
	inline static constexpr unsigned int ExprException_TypeDefinitionIndex = 35462;

	class ExprException : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__CTOR_OFFSET))(this);
		}

		static ::System::OverflowException* _Overflow(::System::String* error)
		{
			return ((::System::OverflowException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__OVERFLOW_OFFSET))(error);
		}

		static ::System::Data::InvalidExpressionException* _Expr(::System::String* error)
		{
			return ((::System::Data::InvalidExpressionException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__EXPR_OFFSET))(error);
		}

		static ::System::Data::SyntaxErrorException* _Syntax(::System::String* error)
		{
			return ((::System::Data::SyntaxErrorException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__SYNTAX_OFFSET))(error);
		}

		static ::System::Data::EvaluateException* _Eval(::System::String* error)
		{
			return ((::System::Data::EvaluateException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__EVAL_OFFSET))(error);
		}

		static ::System::Data::EvaluateException* _Eval_1(::System::String* error, ::System::Exception* innerException)
		{
			return ((::System::Data::EvaluateException*(*)(::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION__EVAL_1_OFFSET))(error, innerException);
		}

		static ::System::Exception* InvokeArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVOKEARGUMENT_OFFSET))();
		}

		static ::System::Exception* NYI(::System::String* moreinfo)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_NYI_OFFSET))(moreinfo);
		}

		static ::System::Exception* MissingOperand(::System::Data::OperatorInfo* before)
		{
			return ((::System::Exception*(*)(::System::Data::OperatorInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERAND_OFFSET))(before);
		}

		static ::System::Exception* MissingOperator(::System::String* token)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERATOR_OFFSET))(token);
		}

		static ::System::Exception* TypeMismatch(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCH_OFFSET))(expr);
		}

		static ::System::Exception* FunctionArgumentOutOfRange(::System::String* arg, ::System::String* func)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTOUTOFRANGE_OFFSET))(arg, func);
		}

		static ::System::Exception* ExpressionTooComplex()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONTOOCOMPLEX_OFFSET))();
		}

		static ::System::Exception* UnboundName(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNBOUNDNAME_OFFSET))(name);
		}

		static ::System::Exception* InvalidString(::System::String* str)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDSTRING_OFFSET))(str);
		}

		static ::System::Exception* UndefinedFunction(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNDEFINEDFUNCTION_OFFSET))(name);
		}

		static ::System::Exception* SyntaxError()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_SYNTAXERROR_OFFSET))();
		}

		static ::System::Exception* FunctionArgumentCount(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_FUNCTIONARGUMENTCOUNT_OFFSET))(name);
		}

		static ::System::Exception* MissingRightParen()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGRIGHTPAREN_OFFSET))();
		}

		static ::System::Exception* UnknownToken(::System::String* token, ::System::Int32 position)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_OFFSET))(token, position);
		}

		static ::System::Exception* UnknownToken_1(::System::Data::Tokens tokExpected, ::System::Data::Tokens tokCurr, ::System::Int32 position)
		{
			return ((::System::Exception*(*)(::System::Data::Tokens, ::System::Data::Tokens, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNKNOWNTOKEN_1_OFFSET))(tokExpected, tokCurr, position);
		}

		static ::System::Exception* DatatypeConvertion(::System::Type* type1, ::System::Type* type2)
		{
			return ((::System::Exception*(*)(::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_DATATYPECONVERTION_OFFSET))(type1, type2);
		}

		static ::System::Exception* DatavalueConvertion(::System::Object* value, ::System::Type* type, ::System::Exception* innerException)
		{
			return ((::System::Exception*(*)(::System::Object*, ::System::Type*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_DATAVALUECONVERTION_OFFSET))(value, type, innerException);
		}

		static ::System::Exception* InvalidName(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDNAME_OFFSET))(name);
		}

		static ::System::Exception* InvalidDate(::System::String* date)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDDATE_OFFSET))(date);
		}

		static ::System::Exception* NonConstantArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_NONCONSTANTARGUMENT_OFFSET))();
		}

		static ::System::Exception* InvalidPattern(::System::String* pat)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDPATTERN_OFFSET))(pat);
		}

		static ::System::Exception* InWithoutParentheses()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INWITHOUTPARENTHESES_OFFSET))();
		}

		static ::System::Exception* InWithoutList()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INWITHOUTLIST_OFFSET))();
		}

		static ::System::Exception* InvalidIsSyntax()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDISSYNTAX_OFFSET))();
		}

		static ::System::Exception* Overflow(::System::Type* type)
		{
			return ((::System::Exception*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_OVERFLOW_OFFSET))(type);
		}

		static ::System::Exception* ArgumentType(::System::String* function, ::System::Int32 arg, ::System::Type* type)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPE_OFFSET))(function, arg, type);
		}

		static ::System::Exception* ArgumentTypeInteger(::System::String* function, ::System::Int32 arg)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_ARGUMENTTYPEINTEGER_OFFSET))(function, arg);
		}

		static ::System::Exception* TypeMismatchInBinop(::System::Int32 op, ::System::Type* type1, ::System::Type* type2)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_TYPEMISMATCHINBINOP_OFFSET))(op, type1, type2);
		}

		static ::System::Exception* AmbiguousBinop(::System::Int32 op, ::System::Type* type1, ::System::Type* type2)
		{
			return ((::System::Exception*(*)(::System::Int32, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_AMBIGUOUSBINOP_OFFSET))(op, type1, type2);
		}

		static ::System::Exception* UnsupportedOperator(::System::Int32 op)
		{
			return ((::System::Exception*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDOPERATOR_OFFSET))(op);
		}

		static ::System::Exception* InvalidNameBracketing(::System::String* name)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDNAMEBRACKETING_OFFSET))(name);
		}

		static ::System::Exception* MissingOperandBefore(::System::String* op)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISSINGOPERANDBEFORE_OFFSET))(op);
		}

		static ::System::Exception* TooManyRightParentheses()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_TOOMANYRIGHTPARENTHESES_OFFSET))();
		}

		static ::System::Exception* UnresolvedRelation(::System::String* name, ::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNRESOLVEDRELATION_OFFSET))(name, expr);
		}

		static ::System::Data::EvaluateException* BindFailure(::System::String* relationName)
		{
			return ((::System::Data::EvaluateException*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_BINDFAILURE_OFFSET))(relationName);
		}

		static ::System::Exception* AggregateArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_AGGREGATEARGUMENT_OFFSET))();
		}

		static ::System::Exception* AggregateUnbound(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_AGGREGATEUNBOUND_OFFSET))(expr);
		}

		static ::System::Exception* EvalNoContext()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_EVALNOCONTEXT_OFFSET))();
		}

		static ::System::Exception* ExpressionUnbound(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_EXPRESSIONUNBOUND_OFFSET))(expr);
		}

		static ::System::Exception* ComputeNotAggregate(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_COMPUTENOTAGGREGATE_OFFSET))(expr);
		}

		static ::System::Exception* FilterConvertion(::System::String* expr)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_FILTERCONVERTION_OFFSET))(expr);
		}

		static ::System::Exception* LookupArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_LOOKUPARGUMENT_OFFSET))();
		}

		static ::System::Exception* InvalidType(::System::String* typeName)
		{
			return ((::System::Exception*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDTYPE_OFFSET))(typeName);
		}

		static ::System::Exception* InvalidHoursArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDHOURSARGUMENT_OFFSET))();
		}

		static ::System::Exception* InvalidMinutesArgument()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDMINUTESARGUMENT_OFFSET))();
		}

		static ::System::Exception* InvalidTimeZoneRange()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_INVALIDTIMEZONERANGE_OFFSET))();
		}

		static ::System::Exception* MismatchKindandTimeSpan()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_MISMATCHKINDANDTIMESPAN_OFFSET))();
		}

		static ::System::Exception* UnsupportedDataType(::System::Type* type)
		{
			return ((::System::Exception*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPREXCEPTION_UNSUPPORTEDDATATYPE_OFFSET))(type);
		}
	};
}
