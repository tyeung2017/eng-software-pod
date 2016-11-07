
#ifndef RLOOP_LCCM655__RLOOP__FCU_CORE_FCU_CORE__TYPES_H_
#define RLOOP_LCCM655__RLOOP__FCU_CORE_FCU_CORE__TYPES_H_

	/** Flight control state machine INIT types */
	typedef enum
	{

		/** Just come out of reset */
		INIT_STATE__RESET = 0U,

		/** Init the comms chanels */
		INIT_STATE__INIT_COMMS,

		/** Setup the SPI uarts */
		INIT_STATE__INIT_SPI_UARTS,


		/** init is done, run the main state machine */
		INIT_STATE__RUN,

	}E_FCU__INIT_STATE_TYPES;




#endif /* RLOOP_LCCM655__RLOOP__FCU_CORE_FCU_CORE__TYPES_H_ */